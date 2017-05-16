#ifndef LINEBUTTON_H
#define LINEBUTTON_H

#include <QPushButton>

class LineButton : public QPushButton {
    Q_OBJECT
public:
    explicit LineButton(QWidget *parent = 0);
    virtual ~LineButton();
signals:

public slots:

private slots:
    void updateStyleSheet();
};

#endif // LINEBUTTON_H
