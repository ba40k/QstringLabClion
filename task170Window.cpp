//
// Created by radamir on 25.02.25.
//

#include "task170Window.h"
#include "logger.h"
static Logger logger;
task170Window:: task170Window(QWidget *parent) : taskWindow(parent){
    qInfo()<<"EntryPoint| task170Window(QWidget *parent)\n";
    setWindowTitle("task170");
    res = new QLabel();
    firstStringInput = new QLineEdit();
    firstStringInput->setPlaceholderText("Enter first string");
    secondStringInput = new QLineEdit();
    secondStringInput->setPlaceholderText("Enter second string");
    getLayout()->addWidget(firstStringInput);
    getLayout()->addWidget(secondStringInput);
    getLayout()->addWidget(res);
    getLayout()->addWidget(getSolveButton());
    getLayout()->addWidget(getCloseButton());
    connect(getSolveButton(), &QPushButton::clicked, this, &task170Window::solve);
    qInfo()<<"End| task170Window(QWidget *parent)\n";
}
void task170Window::solve() {
    qInfo()<<"EntryPoint| task170Window::solve()\n";
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
    qInfo()<<"End| task170Window::solve()\n";
}
