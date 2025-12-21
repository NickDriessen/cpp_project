#include "GameWidget.h"
#include <QPainter>
#include <QKeyEvent>
#include <QTimer>

GameWidget::GameWidget(QWidget* parent)
    : QWidget(parent)
{
    player = new Player(100,300); //vraag 32: dynamic memory allocation
    entities.push_back(player);                 // index 0 = player
    entities.push_back(new Enemy(100, 50));     // index 1 = enemy //vraag 32: dynamic memory allocation

    setFocusPolicy(Qt::StrongFocus); // needed for keyboard input

    QTimer* timer = new QTimer(this);               //vraag 40: useful lambda function
    connect(timer, &QTimer::timeout, this, [this]()
    {
        for (Entity* e : entities)
            e->update();   // polymorphism update

        for (Entity* a : entities)
        {
            Bullet* bullet = dynamic_cast<Bullet*>(a);
            if (!bullet || !bullet->isAlive())
                continue;

            for (Entity* b : entities)
            {
                Enemy* enemy = dynamic_cast<Enemy*>(b);
                if (!enemy || !enemy->isAlive())
                    continue;

                if (checkCollision(*bullet, *enemy))
                {
                    bullet->kill();
                    enemy->kill();
                }
            }
        }

        for (auto it = entities.begin(); it != entities.end(); )
        {
            Entity* e = *it;

            if (!e->isAlive())
            {
                delete e; //vraag 33: dynamic memory removing
                it = entities.erase(it);
            }
            else
            {
                ++it;
            }
        }
        update();

    });
    timer->start(16); // ~60 FPS

}

void GameWidget::paintEvent(QPaintEvent*)
{
    QPainter painter(this);
    for (Entity* e : entities)
        e->draw(painter);
}

void GameWidget::keyPressEvent(QKeyEvent* event)
{
    switch (event->key())
    {
    case Qt::Key_Left:
        player->moveLeft();
        break;

    case Qt::Key_Right:
        player->moveRight();
        break;

    case Qt::Key_Z:
        int BulletX = player->getX() + player->getWidth() / 2;
        int BulletY = player->getY();

        entities.push_back(new Bullet(BulletX, BulletY, 10));
        break;
    }

    update(); // redraw
}

bool GameWidget::checkCollision(const Entity& a, const Entity& b) const //vraag
{
    return a.getX() < b.getX() + b.getWidth() &&
           a.getX() + a.getWidth() > b.getX() &&
           a.getY() < b.getY() + b.getHeight() &&
           a.getY() + a.getHeight() > b.getY();
}
