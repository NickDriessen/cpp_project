#pragma once
#include "Entity.h"

class Player : public Entity
{
public:
    Player(int startX, int startY);

    void update() override;                // movement logic
    void draw(QPainter& painter) override; // draw the player

    void moveLeft();
    void moveRight();
};
