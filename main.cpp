#include "mainwindow.h"
#include <QTextStream>
#include <QApplication>
#include <QWidget>
#include <QHBoxLayout>
#include "taskWindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
   // task170Window t;
   // t.show();

    //var7

    taskWindow tw;
    tw.show();

    w.show();
    return a.exec();
}
