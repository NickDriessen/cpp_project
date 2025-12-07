#include "GameWidget.h"
#include <QPainter>
#include <QKeyEvent>

GameWidget::GameWidget(QWidget* parent)
    : QWidget(parent)
{
    entities.push_back(new Player(100, 300));   // index 0 = player
    entities.push_back(new Enemy(100, 50));     // index 1 = enemy

    setFocusPolicy(Qt::StrongFocus); // needed for keyboard input
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
