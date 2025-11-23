#ifndef ENTITY_H
#define ENTITY_H

#include <QPainter>

class Entity //1. Correct Class //7. Base Class
{
public:
    // Constructor
    Entity(int x, int y, int width, int height, int speed)
        : x(x), y(y), width(width), height(height), speed(speed) {}

    virtual ~Entity() = default;

    // 2. Abstraction // 5. Polymorphism //8. Abstract Base Class //9. Virtual Functions
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

protected: //3. Encapsulation
    int x;
    int y;
    int width;
    int height;
    int speed;
};

#endif // ENTITY_H
