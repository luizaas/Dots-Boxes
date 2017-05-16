#ifndef DOTSANDBOTS_H
#define DOTSANDBOTS_H

#include <QMainWindow>

namespace Ui {
class DotsAndBots;
}

class DotsAndBots : public QMainWindow
{
    Q_OBJECT

public:
    explicit DotsAndBots(QWidget *parent = 0);
    ~DotsAndBots();

private:
    Ui::DotsAndBots *ui;
};

#endif // DOTSANDBOTS_H
