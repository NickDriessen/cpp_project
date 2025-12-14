#include "GameWidget.h"
#include <QPainter>
#include <QKeyEvent>
#include <QTimer>

GameWidget::GameWidget(QWidget* parent)
    : QWidget(parent)
{
    player = new Player(100,300);
    entities.push_back(player);                 // index 0 = player
    entities.push_back(new Enemy(100, 50));     // index 1 = enemy

    setFocusPolicy(Qt::StrongFocus); // needed for keyboard input

    QTimer* timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, [this]() {
        for (Entity* e : entities)
            e->update();   // polymorphism update

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
    }

    update(); // redraw
}
