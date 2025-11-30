#pragma once
#include "Entity.h"

class enemy : public Entity
{
public:
    enemy(int startX, int startY);

    void update() override;

    void moveDown();
    void moveLeft();
    void moveRicht();
};
