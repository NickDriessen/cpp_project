#include <QApplication>
#include "cube_test.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    cube_test cube;
    cube.resize(400, 400);
    cube.show();


    return app.exec();
}
