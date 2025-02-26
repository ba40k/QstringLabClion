//
// Created by radamir on 25.02.25.
//

#ifndef TASK170WINDOW_H
#define TASK170WINDOW_H

#include "taskWindow.h"
#include <QLineEdit>

class Task170Window : public TaskWindow {
private:
    QLineEdit *firstStringInput;
    QLineEdit *secondStringInput;
    QLabel *res;

public:
    Task170Window(QWidget *parent = nullptr);

private slots:
    void solve() override;
};


#endif //TASK170WINDOW_H
