#include "Player.h"

Player::Player(int startX, int startY):
    Entity (startX, startY, 40, 40, 5) {}

void Player::moveLeft()
{
    x -= speed;
}

void Player::moveRight()
{
    x += speed;
}

void Player::draw(QPainter& painter)
{
    painter.setBrush(Qt::green);
    painter.drawRect(x, y, width, height);
}
