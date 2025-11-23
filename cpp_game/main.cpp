#include <QApplication>
#include "GameWidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    GameWidget game;
    game.resize(400, 400);
    game.show();

    return a.exec();
}
