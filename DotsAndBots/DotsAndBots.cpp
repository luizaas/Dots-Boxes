#include "DotsAndBots.h"
#include "ui_DotsAndBots.h"

DotsAndBots::DotsAndBots(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DotsAndBots)
{
    ui->setupUi(this);
}

DotsAndBots::~DotsAndBots()
{
    delete ui;
}
