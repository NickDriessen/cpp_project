#pragma once
#include "Entity.h"


class Bullet : public Entity
{
public:

    Bullet();                                     // vraag 12: default constructor
    Bullet(int startX, int startY, int speed);    // vraag 13: at least 2 parameterized constructors
    Bullet(const Bullet& other);                  // copy constructor
    ~Bullet();                                    // vraag 15: at least 2 destructors

    void update() override;                // Bullet movement
    void draw(QPainter& painter) override; // draw Bullet

    void kill();                    //vraag 20: useful member function
    bool isAlive() const override;

private:
    bool alive; //vraag 22: useful member variable
};
