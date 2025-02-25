//
// Created by radamir on 25.02.25.
//

#ifndef TASK170WINDOW_H
#define TASK170WINDOW_H

#include "taskWindow.h"
#include <QLineEdit>
class task170Window : public taskWindow  {
private:
     QLineEdit *firstStringInput;
     QLineEdit *secondStringInput;
     QLabel *res;

public:
     task170Window(QWidget *parent = nullptr);
private slots:
    void solve() override;

};



#endif //TASK170WINDOW_H
