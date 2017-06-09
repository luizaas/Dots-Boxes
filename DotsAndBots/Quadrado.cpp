#include "Quadrado.h"
#define INF #3f3f3f

Quadrado::Quadrado(QWidget *parent):
    QLabel(parent),
    button[] = new LineButton()[4];
{

}
void Quadrado::formaQuadrado(){


}
void Quadrado::setButton(LineButton b0,LineButton b1,LineButton b2,LineButton b3){
    button[0] = b0;
    button[1] = b1;
    button[2] = b2;
    button[3] = b3;
}

