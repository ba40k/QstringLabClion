//
// Created by radamir on 25.02.25.
//

#ifndef TASK194WINDOW_H
#define TASK194WINDOW_H

#include "taskWindow.h"
#include <QLineEdit>
#include <QTextEdit>

class Task194Window : public TaskWindow  {
private:
    QTextEdit *firstTextInput;
    QTextEdit *secondTextInput;
    QLabel *res;
    QVector<QString> parse(const QString &text, QChar delimiter = ' ');

public:
    Task194Window(QWidget *parent = nullptr);
    private slots:
        void solve() override;

};

#endif //TASK194WINDOW_H
