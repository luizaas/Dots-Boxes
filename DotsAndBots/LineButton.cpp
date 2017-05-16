#include "LineButton.h"

LineButton::LineButton(QWidget *parent) : QPushButton(parent){
    this->updateStyleSheet();
}
LineButton::~LineButton(){}

void LineButton::updateStyleSheet(){
    this->setStyleSheet("\
        QPushButton { \
            border: 0px solid transparent; \
        }\
        QPushButton { \
            border-top-width: 15px;\
        }\
        QPushButton:hover{\
            border-image: url(':/dotts');\
        }\
    ");
}
