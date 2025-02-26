//
// Created by radamir on 26.02.25.
//
#include<QApplication>
#include<QFile>
#ifndef LOGGER_H
#define LOGGER_H
static QtMessageHandler originalHandler =  nullptr;
void logToFile(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    static QFile logFile("logs/log.txt");
    static QTextStream ts(&logFile);
    if(logFile.open(QFile::ReadWrite | QFile::Append))
    {
        ts << context.file << ":" << context.line << ":"
           << context.function << ": " << msg <<'\n';
        logFile.close();
    }
}


#endif //LOGGER_H
