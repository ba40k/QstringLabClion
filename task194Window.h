//
// Created by radamir on 25.02.25.
//

#ifndef TASK194WINDOW_H
#define TASK194WINDOW_H

#include "taskWindow.h"
#include <QLineEdit>
#include <QTextEdit>

class task194Window : public taskWindow  {
private:
    QTextEdit *firstTextInput;
    QTextEdit *secondTextInput;
    QLabel *res;
    QVector<QString> parse(const QString &text, QChar delimiter = ' ');

public:
    task194Window(QWidget *parent = nullptr);
    private slots:
        void solve() override;

};

#endif //TASK194WINDOW_H
