#pragma once
#include <QPainter>

class Entity //useful and correct abstraction
{
public:
    // Constructor
    Entity(int x, int y, int width, int height, int speed)
        : x(x), y(y), width(width), height(height), speed(speed) {}

    virtual ~Entity() = default; // vraag 15: at least 2 destructors


    virtual void update() = 0;                  //vraag 18: useful proven (dynamic) polymorphism
    virtual void draw(QPainter& painter) = 0;   //Vraag 34: 2 useful (modern) call-by-references
    virtual bool isAlive() const { return true; }

    // vraag 23: useful getters and setters
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
