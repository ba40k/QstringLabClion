//
// Created by radamir on 26.02.25.
//
#include<QApplication>
#include<QFile>
#ifndef LOGGER_H
#define LOGGER_H
class Logger {
private:
    QtMessageHandler originalHandler;
public:
    Logger();
    static void logToFile(QtMsgType type, const QMessageLogContext &context, const QString &msg);

};
#endif //LOGGER_H
