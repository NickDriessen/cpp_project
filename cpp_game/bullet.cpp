#include "Bullet.h"

Bullet::Bullet()
    : Entity(0, 0, 6, 12, 8), alive(true)
{
}

Bullet::Bullet(int startX, int startY, int speed)
    : Entity(startX, startY, 6, 12, speed), alive(true)
{
}

Bullet::Bullet(const Bullet& other)
    : Entity(other.x, other.y, other.width, other.height, other.speed),
    alive(other.alive)
{
}

Bullet::~Bullet()
{
    // Destructor (for future cleanup or debugging)
}

void Bullet::update()
{
    y -= speed;

    if (y + height < 0)
        alive = false;
}

void Bullet::draw(QPainter& painter)
{
    painter.setBrush(Qt::yellow);
    painter.drawRect(x, y, width, height);
}

bool Bullet::isAlive() const
{
    return alive;
}
