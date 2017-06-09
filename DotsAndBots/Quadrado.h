#ifndef QUADRADO_H
#define QUADRADO_H
#include "LineButton.h"
#include <QLabel>

class Quadrado: public QLabel{
public:
    explicit Quadrado(QWidget *parent = 0);
public slots:
    void formaQuadrado();
    void setButton(LineButton b0,LineButton b1,LineButton b2,LineButton b3);
private:
    LineButton button[4];
    int tempo[4];
    int player[4];
};

#endif // QUADRADO_H
