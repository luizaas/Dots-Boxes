#ifndef LINEBUTTON_H
#define LINEBUTTON_H

#include <QPushButton>

class LineButton : public QPushButton {
    Q_OBJECT
    Q_PROPERTY(Qt::Orientation mode READ mode WRITE setMode NOTIFY modeChanged)
    Q_PROPERTY(QColor color READ color WRITE setColor NOTIFY colorChanged)
public:
    explicit LineButton(QWidget *parent = 0);
    virtual ~LineButton();
    Qt::Orientation mode() const {return m_mode; } //metodo get
    QColor color() const {return m_color;}
signals:
    void modeChanged(Qt::Orientation mode); //sinal avisa qual a nova orientaçao
    void colorChanged(QColor color);
public slots:
    void setMode(Qt::Orientation mode); //metodo set
    void setColor(QColor color);
    void reset();
private:
    Qt::Orientation m_mode;
    QColor m_color;
private slots:
    void updateStyleSheet();
};

#endif // LINEBUTTON_H
