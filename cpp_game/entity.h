#ifndef ENTITY_H
#define ENTITY_H

#include <QPainter>

class Entity
{
public:
    // Constructor
    Entity(int x, int y, int width, int height, int speed)
        : x(x), y(y), width(width), height(height), speed(speed) {}

    virtual ~Entity() = default;

    // Pure virtual functions (must be implemented by child classes)
    virtual void update() = 0;
    virtual void draw(QPainter& painter) = 0;

    // Getters
    int getX() const { return x; }
    int getY() const { return y; }
    int getWidth() const { return width; }
    int getHeight() const { return height; }

    // Setters
    void setX(int newX) { x = newX; }
    void setY(int newY) { y = newY; }

protected:
    int x;
    int y;
    int width;
    int height;
    int speed;
};

#endif // ENTITY_H
