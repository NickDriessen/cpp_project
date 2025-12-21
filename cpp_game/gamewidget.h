#pragma once
#include <QWidget>
#include "Player.h"
#include "Enemy.h"
#include "Bullet.h"
#include <vector>

class GameWidget : public QWidget
{
    Q_OBJECT
public:
    GameWidget(QWidget* parent = nullptr); //vraag 12: at least 2 default constructors

protected: //vraag 4: correct protections
    void paintEvent(QPaintEvent*) override;
    void keyPressEvent(QKeyEvent* event) override;

private:
    Player* player;
    std::vector<Entity*> entities; //vraag 36: useful container class
    bool checkCollision(const Entity& a, const Entity& b) const; //Vraag 34: 2 useful (modern) call-by-references
};
