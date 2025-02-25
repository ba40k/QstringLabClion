//
// Created by radamir on 25.02.25.
//

#include "task170Window.h"

task170Window:: task170Window(QWidget *parent) : taskWindow(parent){
    setWindowTitle("task170 solver");
    res = new QLabel();
    firstStringInput = new QLineEdit();
    firstStringInput->setPlaceholderText("Enter first string");
    secondStringInput = new QLineEdit();
    secondStringInput->setPlaceholderText("Enter second string");
    getLayout()->addWidget(firstStringInput);
    getLayout()->addWidget(secondStringInput);
    getLayout()->addWidget(res);
    getLayout()->removeWidget(getSolveButton()); // так как кнопка создалась в конструкторе родителся, то она появилась сверху
    getLayout()->addWidget(getSolveButton());
    connect(getSolveButton(), &QPushButton::clicked, this, &task170Window::solve);
}
void task170Window::solve() {
    QString firstString = firstStringInput->text();
    QString secondString = secondStringInput->text();
    QMap<QChar,int> firstStringCharCounter;
    QMap<QChar,int> secondStringCharCounter;
    for (auto x : firstString) {
        ++firstStringCharCounter[x];
    }
    for (auto x : secondString) {
        ++secondStringCharCounter[x];
    }
    QString ans;
    for (auto x : firstString) {
        if (secondStringCharCounter[x]==0) {
            ans.push_back(x);
            ans.push_back(' ');
        }
    }
    for (auto x : secondString) {
        if (firstStringCharCounter[x]==0) {
            ans.push_back(x);
            ans.push_back(' ');
        }
    }


    res->setText(ans);
}
