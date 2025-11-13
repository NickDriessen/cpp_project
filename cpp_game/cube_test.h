#ifndef CUBE_TEST_H
#define CUBE_TEST_H

#include <QWidget>

class cube_test : public QWidget
{
    Q_OBJECT
public:
    explicit cube_test(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;
    void keyPressEvent(QKeyEvent *event) override;
private:
    int x = 50;
    int y = 50;
    int speed = 5;
};

#endif // CUBE_TEST_H
