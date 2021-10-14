#include "dehisto.h"
#include "HeritageTP1Q2.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    dehisto w;
    w.show();
    return a.exec();
}
