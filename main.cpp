#include "mainwindow.h"
#include <QTextStream>
#include <QApplication>
#include <QWidget>
#include <QHBoxLayout>
#include "taskWindow.h"
#include "task170Window.h"
#include "task182Window.h"
#include "task194Window.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
