#pragma once
#include "Entity.h"

class Player : public Entity
{
public:
    Player(int startX, int startY); //vraag 13: at least 2 parameterized constructors

    void update() override;                // movement logic
    void draw(QPainter& painter) override; // draw the player

    void moveLeft();    //vraag 20: useful member function
    void moveRight();
};
