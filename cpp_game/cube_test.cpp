#include "cube_test.h"
#include <QPainter>
#include <QKeyEvent>

cube_test::cube_test(QWidget *parent) : QWidget(parent)
{
}

void cube_test::keyPressEvent(QKeyEvent *event)
{
    switch (event->key())
    {
    case Qt::Key_Left:  x -= speed;
        break;
    case Qt::Key_Right: x += speed;
        break;
    case Qt::Key_Up:    y -= speed;
        break;
    case Qt::Key_Down:  y += speed;
        break;
    }
    update();   //repaint the widget (im guessing update the code so it moves?)
}

void cube_test::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setBrush(Qt::yellow);
    painter.drawRect(x,y,50,50);
}
