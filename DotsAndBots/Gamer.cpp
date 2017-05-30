#include "Gamer.h"

Gamer::Gamer(QColor color){
    this->m_color=color;
    this->pontos=0;
}
Gamer::~Gamer(){
    delete this;
}
Gamer::getColor(){
    return this->m_color;
}
