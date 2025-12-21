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
    GameWidget(QWidget* parent = nullptr);

protected:
    void paintEvent(QPaintEvent*) override;
    void keyPressEvent(QKeyEvent* event) override;

private:
    Player* player;
    std::vector<Entity*> entities;
};
