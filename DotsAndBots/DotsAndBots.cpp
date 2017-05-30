#include "DotsAndBots.h"
#include "ui_DotsAndBots.h"
#include <QDebug>

DotsAndBots::DotsAndBots(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DotsAndBots){
    ui->setupUi(this);

    for(int i=0;i<7;i++){
        for(int j=0;j<4;j++){
            LineButton* button =
                this->findChild<LineButton*>(QString("p%1%2").arg(i).arg(j));
            if(button){
                QObject::connect(button,SIGNAL(clicked(bool)), this, SLOT(handleButton()));
                QObject::connect(ui->actionNovo,SIGNAL(triggered(bool)),button,SLOT(reset()));
            }
        }
    }
    QObject::connect(ui->actionSair,SIGNAL(triggered(bool)),qApp,SLOT(quit()));
}

DotsAndBots::~DotsAndBots(){
    delete ui;
}

void DotsAndBots::handleButton(){
    static int x =0;
    QColor color = x%2? Qt::darkMagenta : Qt::blue;
    LineButton* button = qobject_cast<LineButton*>(QObject::sender());
    button->setColor(color);
    x=(x+1)%2;
    if(button==ui->p31){
        ui->L21->setText("P1");
    }
    //qDebug() << "Clicou";
    //QColor("#663399")
}
