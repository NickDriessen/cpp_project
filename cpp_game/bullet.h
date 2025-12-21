#pragma once
#include "Entity.h"


class Bullet : public Entity
{
public:

    Bullet();                                     // default constructor
    Bullet(int startX, int startY, int speed);    // parameterized constructor
    Bullet(const Bullet& other);                  // copy constructor
    ~Bullet();                                    // destructor



    void update() override;                // Bullet movement
    void draw(QPainter& painter) override; // draw Bullet

    bool isAlive() const;

private:
    bool alive;
};
