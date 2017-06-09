/********************************************************************************
** Form generated from reading UI file 'DotsAndBots.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOTSANDBOTS_H
#define UI_DOTSANDBOTS_H

#include <LineButton.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DotsAndBots
{
public:
    QAction *actionNovo;
    QAction *actionSobre;
    QAction *actionSair;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    LineButton *p01;
    QLabel *label;
    LineButton *p02;
    QLabel *label_4;
    LineButton *p03;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    LineButton *p10;
    QLabel *L11;
    LineButton *p11;
    QLabel *L12;
    LineButton *p12;
    QLabel *L13;
    LineButton *p13;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    LineButton *p21;
    QLabel *label_6;
    LineButton *p22;
    QLabel *label_7;
    LineButton *p23;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_4;
    LineButton *p30;
    QLabel *L21;
    LineButton *p31;
    QLabel *L22;
    LineButton *p32;
    QLabel *L23;
    LineButton *p33;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_32;
    LineButton *p41;
    QLabel *label_33;
    LineButton *p42;
    QLabel *label_34;
    LineButton *p43;
    QLabel *label_35;
    QHBoxLayout *horizontalLayout_9;
    LineButton *p50;
    QLabel *L31;
    LineButton *p51;
    QLabel *L32;
    LineButton *p52;
    QLabel *L33;
    LineButton *p53;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_36;
    LineButton *p61;
    QLabel *label_37;
    LineButton *p62;
    QLabel *label_38;
    LineButton *p63;
    QLabel *label_39;
    QMenuBar *menuBar;
    QMenu *menuJogo;
    QMenu *menuAjuda;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DotsAndBots)
    {
        if (DotsAndBots->objectName().isEmpty())
            DotsAndBots->setObjectName(QStringLiteral("DotsAndBots"));
        DotsAndBots->resize(352, 408);
        actionNovo = new QAction(DotsAndBots);
        actionNovo->setObjectName(QStringLiteral("actionNovo"));
        actionSobre = new QAction(DotsAndBots);
        actionSobre->setObjectName(QStringLiteral("actionSobre"));
        actionSair = new QAction(DotsAndBots);
        actionSair->setObjectName(QStringLiteral("actionSair"));
        centralWidget = new QWidget(DotsAndBots);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral("*{ background-color: pink;}"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(10, 10, 10, 10);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(15, 15));
        label_2->setMaximumSize(QSize(15, 15));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/dot")));
        label_2->setScaledContents(false);

        horizontalLayout->addWidget(label_2);

        p01 = new LineButton(centralWidget);
        p01->setObjectName(QStringLiteral("p01"));
        p01->setMinimumSize(QSize(90, 15));
        p01->setMaximumSize(QSize(90, 15));
        p01->setFlat(true);
        p01->setProperty("mode", QVariant(1));

        horizontalLayout->addWidget(p01);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(15, 15));
        label->setMaximumSize(QSize(15, 15));
        label->setPixmap(QPixmap(QString::fromUtf8(":/dot")));
        label->setScaledContents(false);

        horizontalLayout->addWidget(label);

        p02 = new LineButton(centralWidget);
        p02->setObjectName(QStringLiteral("p02"));
        p02->setMinimumSize(QSize(90, 15));
        p02->setMaximumSize(QSize(90, 15));
        p02->setFlat(true);
        p02->setProperty("mode", QVariant(1));

        horizontalLayout->addWidget(p02);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(15, 15));
        label_4->setMaximumSize(QSize(15, 15));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/dot")));
        label_4->setScaledContents(false);

        horizontalLayout->addWidget(label_4);

        p03 = new LineButton(centralWidget);
        p03->setObjectName(QStringLiteral("p03"));
        p03->setMinimumSize(QSize(90, 15));
        p03->setMaximumSize(QSize(90, 15));
        p03->setFlat(true);
        p03->setProperty("mode", QVariant(1));

        horizontalLayout->addWidget(p03);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(15, 15));
        label_3->setMaximumSize(QSize(15, 15));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/dot")));
        label_3->setScaledContents(false);

        horizontalLayout->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        p10 = new LineButton(centralWidget);
        p10->setObjectName(QStringLiteral("p10"));
        p10->setMinimumSize(QSize(15, 90));
        p10->setMaximumSize(QSize(15, 90));
        p10->setFlat(true);
        p10->setProperty("mode", QVariant(2));

        horizontalLayout_2->addWidget(p10);

        L11 = new QLabel(centralWidget);
        L11->setObjectName(QStringLiteral("L11"));
        L11->setMinimumSize(QSize(90, 90));
        L11->setMaximumSize(QSize(90, 90));

        horizontalLayout_2->addWidget(L11);

        p11 = new LineButton(centralWidget);
        p11->setObjectName(QStringLiteral("p11"));
        p11->setMinimumSize(QSize(15, 90));
        p11->setMaximumSize(QSize(15, 90));
        p11->setFlat(true);
        p11->setProperty("mode", QVariant(2));

        horizontalLayout_2->addWidget(p11);

        L12 = new QLabel(centralWidget);
        L12->setObjectName(QStringLiteral("L12"));
        L12->setMinimumSize(QSize(90, 90));
        L12->setMaximumSize(QSize(90, 90));

        horizontalLayout_2->addWidget(L12);

        p12 = new LineButton(centralWidget);
        p12->setObjectName(QStringLiteral("p12"));
        p12->setMinimumSize(QSize(15, 90));
        p12->setMaximumSize(QSize(15, 90));
        p12->setFlat(true);
        p12->setProperty("mode", QVariant(2));

        horizontalLayout_2->addWidget(p12);

        L13 = new QLabel(centralWidget);
        L13->setObjectName(QStringLiteral("L13"));
        L13->setMinimumSize(QSize(90, 90));
        L13->setMaximumSize(QSize(90, 90));

        horizontalLayout_2->addWidget(L13);

        p13 = new LineButton(centralWidget);
        p13->setObjectName(QStringLiteral("p13"));
        p13->setMinimumSize(QSize(15, 90));
        p13->setMaximumSize(QSize(15, 90));
        p13->setFlat(true);
        p13->setProperty("mode", QVariant(2));

        horizontalLayout_2->addWidget(p13);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(15, 15));
        label_5->setMaximumSize(QSize(15, 15));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/dot")));
        label_5->setScaledContents(false);

        horizontalLayout_3->addWidget(label_5);

        p21 = new LineButton(centralWidget);
        p21->setObjectName(QStringLiteral("p21"));
        p21->setMinimumSize(QSize(90, 15));
        p21->setMaximumSize(QSize(90, 15));
        p21->setFlat(true);
        p21->setProperty("mode", QVariant(1));

        horizontalLayout_3->addWidget(p21);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(15, 15));
        label_6->setMaximumSize(QSize(15, 15));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/dot")));
        label_6->setScaledContents(false);

        horizontalLayout_3->addWidget(label_6);

        p22 = new LineButton(centralWidget);
        p22->setObjectName(QStringLiteral("p22"));
        p22->setMinimumSize(QSize(90, 15));
        p22->setMaximumSize(QSize(90, 15));
        p22->setFlat(true);
        p22->setProperty("mode", QVariant(1));

        horizontalLayout_3->addWidget(p22);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(15, 15));
        label_7->setMaximumSize(QSize(15, 15));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/dot")));
        label_7->setScaledContents(false);

        horizontalLayout_3->addWidget(label_7);

        p23 = new LineButton(centralWidget);
        p23->setObjectName(QStringLiteral("p23"));
        p23->setMinimumSize(QSize(90, 15));
        p23->setMaximumSize(QSize(90, 15));
        p23->setFlat(true);
        p23->setProperty("mode", QVariant(1));

        horizontalLayout_3->addWidget(p23);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(15, 15));
        label_8->setMaximumSize(QSize(15, 15));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/dot")));
        label_8->setScaledContents(false);

        horizontalLayout_3->addWidget(label_8);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        p30 = new LineButton(centralWidget);
        p30->setObjectName(QStringLiteral("p30"));
        p30->setEnabled(true);
        p30->setMinimumSize(QSize(15, 90));
        p30->setMaximumSize(QSize(15, 90));
        p30->setFlat(true);
        p30->setProperty("mode", QVariant(2));

        horizontalLayout_4->addWidget(p30);

        L21 = new QLabel(centralWidget);
        L21->setObjectName(QStringLiteral("L21"));
        L21->setMinimumSize(QSize(90, 90));
        L21->setMaximumSize(QSize(90, 90));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        L21->setFont(font);
        L21->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(L21);

        p31 = new LineButton(centralWidget);
        p31->setObjectName(QStringLiteral("p31"));
        p31->setMinimumSize(QSize(15, 90));
        p31->setMaximumSize(QSize(15, 90));
        p31->setFlat(true);
        p31->setProperty("mode", QVariant(2));

        horizontalLayout_4->addWidget(p31);

        L22 = new QLabel(centralWidget);
        L22->setObjectName(QStringLiteral("L22"));
        L22->setMinimumSize(QSize(90, 90));
        L22->setMaximumSize(QSize(90, 90));
        L22->setFont(font);
        L22->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(L22);

        p32 = new LineButton(centralWidget);
        p32->setObjectName(QStringLiteral("p32"));
        p32->setMinimumSize(QSize(15, 90));
        p32->setMaximumSize(QSize(15, 90));
        p32->setFlat(true);
        p32->setProperty("mode", QVariant(2));

        horizontalLayout_4->addWidget(p32);

        L23 = new QLabel(centralWidget);
        L23->setObjectName(QStringLiteral("L23"));
        L23->setMinimumSize(QSize(90, 90));
        L23->setMaximumSize(QSize(90, 90));

        horizontalLayout_4->addWidget(L23);

        p33 = new LineButton(centralWidget);
        p33->setObjectName(QStringLiteral("p33"));
        p33->setMinimumSize(QSize(15, 90));
        p33->setMaximumSize(QSize(15, 90));
        p33->setFlat(true);
        p33->setProperty("mode", QVariant(2));

        horizontalLayout_4->addWidget(p33);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_32 = new QLabel(centralWidget);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setMinimumSize(QSize(15, 15));
        label_32->setMaximumSize(QSize(15, 15));
        label_32->setPixmap(QPixmap(QString::fromUtf8(":/dot")));
        label_32->setScaledContents(false);

        horizontalLayout_10->addWidget(label_32);

        p41 = new LineButton(centralWidget);
        p41->setObjectName(QStringLiteral("p41"));
        p41->setMinimumSize(QSize(90, 15));
        p41->setMaximumSize(QSize(90, 15));
        p41->setFlat(true);
        p41->setProperty("mode", QVariant(1));

        horizontalLayout_10->addWidget(p41);

        label_33 = new QLabel(centralWidget);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setMinimumSize(QSize(15, 15));
        label_33->setMaximumSize(QSize(15, 15));
        label_33->setPixmap(QPixmap(QString::fromUtf8(":/dot")));
        label_33->setScaledContents(false);

        horizontalLayout_10->addWidget(label_33);

        p42 = new LineButton(centralWidget);
        p42->setObjectName(QStringLiteral("p42"));
        p42->setMinimumSize(QSize(90, 15));
        p42->setMaximumSize(QSize(90, 15));
        p42->setFlat(true);
        p42->setProperty("mode", QVariant(1));

        horizontalLayout_10->addWidget(p42);

        label_34 = new QLabel(centralWidget);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setMinimumSize(QSize(15, 15));
        label_34->setMaximumSize(QSize(15, 15));
        label_34->setPixmap(QPixmap(QString::fromUtf8(":/dot")));
        label_34->setScaledContents(false);

        horizontalLayout_10->addWidget(label_34);

        p43 = new LineButton(centralWidget);
        p43->setObjectName(QStringLiteral("p43"));
        p43->setMinimumSize(QSize(90, 15));
        p43->setMaximumSize(QSize(90, 15));
        p43->setFlat(true);
        p43->setProperty("mode", QVariant(1));

        horizontalLayout_10->addWidget(p43);

        label_35 = new QLabel(centralWidget);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setMinimumSize(QSize(15, 15));
        label_35->setMaximumSize(QSize(15, 15));
        label_35->setPixmap(QPixmap(QString::fromUtf8(":/dot")));
        label_35->setScaledContents(false);

        horizontalLayout_10->addWidget(label_35);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        p50 = new LineButton(centralWidget);
        p50->setObjectName(QStringLiteral("p50"));
        p50->setMinimumSize(QSize(15, 90));
        p50->setMaximumSize(QSize(15, 90));
        p50->setFlat(true);
        p50->setProperty("mode", QVariant(2));

        horizontalLayout_9->addWidget(p50);

        L31 = new QLabel(centralWidget);
        L31->setObjectName(QStringLiteral("L31"));
        L31->setMinimumSize(QSize(90, 90));
        L31->setMaximumSize(QSize(90, 90));

        horizontalLayout_9->addWidget(L31);

        p51 = new LineButton(centralWidget);
        p51->setObjectName(QStringLiteral("p51"));
        p51->setMinimumSize(QSize(15, 90));
        p51->setMaximumSize(QSize(15, 90));
        p51->setFlat(true);
        p51->setProperty("mode", QVariant(2));

        horizontalLayout_9->addWidget(p51);

        L32 = new QLabel(centralWidget);
        L32->setObjectName(QStringLiteral("L32"));
        L32->setMinimumSize(QSize(90, 90));
        L32->setMaximumSize(QSize(90, 90));

        horizontalLayout_9->addWidget(L32);

        p52 = new LineButton(centralWidget);
        p52->setObjectName(QStringLiteral("p52"));
        p52->setMinimumSize(QSize(15, 90));
        p52->setMaximumSize(QSize(15, 90));
        p52->setFlat(true);
        p52->setProperty("mode", QVariant(2));

        horizontalLayout_9->addWidget(p52);

        L33 = new QLabel(centralWidget);
        L33->setObjectName(QStringLiteral("L33"));
        L33->setMinimumSize(QSize(90, 90));
        L33->setMaximumSize(QSize(90, 90));

        horizontalLayout_9->addWidget(L33);

        p53 = new LineButton(centralWidget);
        p53->setObjectName(QStringLiteral("p53"));
        p53->setMinimumSize(QSize(15, 90));
        p53->setMaximumSize(QSize(15, 90));
        p53->setFlat(true);
        p53->setProperty("mode", QVariant(2));

        horizontalLayout_9->addWidget(p53);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_36 = new QLabel(centralWidget);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setMinimumSize(QSize(15, 15));
        label_36->setMaximumSize(QSize(15, 15));
        label_36->setPixmap(QPixmap(QString::fromUtf8(":/dot")));
        label_36->setScaledContents(false);

        horizontalLayout_11->addWidget(label_36);

        p61 = new LineButton(centralWidget);
        p61->setObjectName(QStringLiteral("p61"));
        p61->setMinimumSize(QSize(90, 15));
        p61->setMaximumSize(QSize(90, 15));
        p61->setFlat(true);
        p61->setProperty("mode", QVariant(1));

        horizontalLayout_11->addWidget(p61);

        label_37 = new QLabel(centralWidget);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setMinimumSize(QSize(15, 15));
        label_37->setMaximumSize(QSize(15, 15));
        label_37->setPixmap(QPixmap(QString::fromUtf8(":/dot")));
        label_37->setScaledContents(false);

        horizontalLayout_11->addWidget(label_37);

        p62 = new LineButton(centralWidget);
        p62->setObjectName(QStringLiteral("p62"));
        p62->setMinimumSize(QSize(90, 15));
        p62->setMaximumSize(QSize(90, 15));
        p62->setFlat(true);
        p62->setProperty("mode", QVariant(1));

        horizontalLayout_11->addWidget(p62);

        label_38 = new QLabel(centralWidget);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setMinimumSize(QSize(15, 15));
        label_38->setMaximumSize(QSize(15, 15));
        label_38->setPixmap(QPixmap(QString::fromUtf8(":/dot")));
        label_38->setScaledContents(false);

        horizontalLayout_11->addWidget(label_38);

        p63 = new LineButton(centralWidget);
        p63->setObjectName(QStringLiteral("p63"));
        p63->setMinimumSize(QSize(90, 15));
        p63->setMaximumSize(QSize(90, 15));
        p63->setFlat(true);
        p63->setProperty("mode", QVariant(1));

        horizontalLayout_11->addWidget(p63);

        label_39 = new QLabel(centralWidget);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setMinimumSize(QSize(15, 15));
        label_39->setMaximumSize(QSize(15, 15));
        label_39->setPixmap(QPixmap(QString::fromUtf8(":/dot")));
        label_39->setScaledContents(false);

        horizontalLayout_11->addWidget(label_39);


        verticalLayout->addLayout(horizontalLayout_11);

        DotsAndBots->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DotsAndBots);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 352, 22));
        menuJogo = new QMenu(menuBar);
        menuJogo->setObjectName(QStringLiteral("menuJogo"));
        menuAjuda = new QMenu(menuBar);
        menuAjuda->setObjectName(QStringLiteral("menuAjuda"));
        DotsAndBots->setMenuBar(menuBar);
        statusBar = new QStatusBar(DotsAndBots);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DotsAndBots->setStatusBar(statusBar);

        menuBar->addAction(menuJogo->menuAction());
        menuBar->addAction(menuAjuda->menuAction());
        menuJogo->addAction(actionNovo);
        menuJogo->addAction(actionSair);
        menuAjuda->addAction(actionSobre);

        retranslateUi(DotsAndBots);

        QMetaObject::connectSlotsByName(DotsAndBots);
    } // setupUi

    void retranslateUi(QMainWindow *DotsAndBots)
    {
        DotsAndBots->setWindowTitle(QApplication::translate("DotsAndBots", "DotsAndBots", Q_NULLPTR));
        actionNovo->setText(QApplication::translate("DotsAndBots", "Novo", Q_NULLPTR));
        actionSobre->setText(QApplication::translate("DotsAndBots", "Sobre", Q_NULLPTR));
        actionSair->setText(QApplication::translate("DotsAndBots", "Sair", Q_NULLPTR));
        label_2->setText(QString());
        label->setText(QString());
        label_4->setText(QString());
        label_3->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        label_32->setText(QString());
        label_33->setText(QString());
        label_34->setText(QString());
        label_35->setText(QString());
        label_36->setText(QString());
        label_37->setText(QString());
        label_38->setText(QString());
        label_39->setText(QString());
        menuJogo->setTitle(QApplication::translate("DotsAndBots", "Jogo", Q_NULLPTR));
        menuAjuda->setTitle(QApplication::translate("DotsAndBots", "Ajuda", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DotsAndBots: public Ui_DotsAndBots {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOTSANDBOTS_H
