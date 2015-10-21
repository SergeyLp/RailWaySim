#include "mainwindow.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    ///Node n1;
    ///n1.assign("SPb", 0.0);


    //QLabel *w = new QLabel(QString::fromStdString(n1.toString()));
    w.show();

    return a.exec();
}
