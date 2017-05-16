#include "DotsAndBots.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DotsAndBots w;
    w.show();

    return a.exec();
}
