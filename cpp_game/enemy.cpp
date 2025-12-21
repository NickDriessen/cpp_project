#include "Enemy.h"

Enemy::Enemy(int startX, int startY)
    : Entity(startX, startY, 40, 40, 2)   // smaller speed
{
}

void Enemy::update()
{
    // Very simple: enemy moves downward
    y += speed;
}

void Enemy::draw(QPainter& painter)
{
    painter.setBrush(Qt::red);
    painter.drawRect(x, y, width, height);
}

bool Enemy::isAlive() const
{
    return alive;
}

void Enemy::kill()
{
    alive = false;
}
