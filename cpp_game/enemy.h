#pragma once
#include "Entity.h"

class Enemy : public Entity
{
public:
    Enemy(int startX, int startY);

    void update() override;                // enemy movement
    void draw(QPainter& painter) override; // draw enemy

    bool isAlive() const override;
    void kill();

private:
    bool alive = true;

};
