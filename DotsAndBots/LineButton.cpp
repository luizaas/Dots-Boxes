#include "LineButton.h"

LineButton::LineButton(QWidget *parent) :
    QPushButton(parent),
    m_mode(Qt::Horizontal),
    m_color(QColor("#663399")) {
    this->updateStyleSheet();
}

LineButton::~LineButton(){}

void LineButton::setMode(Qt::Orientation mode){
    if(mode != m_mode){
         m_mode = mode;
         emit modeChanged(m_mode);
    }
}

void LineButton::setColor(QColor color){
      if(color != m_color){
           m_color = color;
           emit colorChanged(m_color);
            this->setEnabled(false);
      }
}

void LineButton::updateStyleSheet(){
   QString rgba = m_color.name(QColor::HexArgb);

    this->setStyleSheet(QString("\
        QPushButton { \
            border-radius: 0px;            \
            border: 0px solid transparent; \
        }\
        QPushButton[mode=\"1\"] { \
            border-top-width: 15px;\
        }\
        QPushButton[mode=\"2\"] { \
            border-left-width: 15px;\
        }\
        QPushButton[mode=\"1\"]:!enabled { \
            border-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,        \
                            stop:0 transparent, stop: 0.2 transparent, stop: 0.5 %1, \
                            stop: 0.8 transparent, stop:1 transparent);              \
        }          \
        QPushButton[mode=\"2\"]:!enabled { \
            border-color: qlineargradient(x1:0, y1:0, x2:1, y2:0,        \
                            stop:0 transparent, stop: 0.2 transparent, stop: 0.5 %1, \
                            stop: 0.8 transparent, stop:1 transparent);              \
        }\
        QPushButton:enabled:hover{\
            border-image: url(':/dotts');\
        }\
    ").arg(rgba));
}
