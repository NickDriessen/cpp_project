#include "GameWidget.h"
#include <QPainter>
#include <QKeyEvent>

GameWidget::GameWidget(QWidget* parent)
    : QWidget(parent)
{
    player = new Player(100, 300);   // start position

    setFocusPolicy(Qt::StrongFocus); // needed for keyboard input
}

void GameWidget::paintEvent(QPaintEvent*)
{
    QPainter painter(this);
    player->draw(painter);
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
