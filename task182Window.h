//
// Created by radamir on 25.02.25.
//

#ifndef TASK182WINDOW_H
#define TASK182WINDOW_H



#include "taskWindow.h"
#include <QLineEdit>
#include <QTextEdit>

class Task182Window : public TaskWindow  {
private:
    QTextEdit *inputText;
    QLineEdit *inputChar;
    QLabel *res;

public:
    Task182Window(QWidget *parent = nullptr);
    private slots:
        void solve() override;

};


#endif //TASK182WINDOW_H
