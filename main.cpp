#include "mainwindow.h"
#include <QApplication>
#include <QWidget>
#include <QFile>
#include"logger.h"
int main(int argc, char *argv[])
{
    QtMessageHandler originalHandler =  qInstallMessageHandler(logToFile);
    qInfo() << "EntryPoint| int main(int argc, char *argv[])\n";
    QApplication a(argc, argv);
    MainWindow w;
    qInfo() << "Logic, MainWindow created| int main(int argc, char *argv[] \n";
    w.show();
    qInfo() << "Logic, MainWindow showed| int main(int argc, char *argv[] \n";
    qInfo() << "End| int main(int argc, char *argv[])\n";
    return a.exec();
}
