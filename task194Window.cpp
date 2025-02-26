//
// Created by radamir on 25.02.25.
//

#include "task194Window.h"

#include <iostream>
#include"logger.h"
static Logger logger;
task194Window:: task194Window(QWidget *parent) : taskWindow(parent){
    qInfo()<<"EntryPoint| task194Window(QWidget *parent)\n";
    setWindowTitle("task194");
    res = new QLabel();
    firstTextInput = new QTextEdit();
    firstTextInput->setPlaceholderText("Enter first sentence");
    secondTextInput = new QTextEdit();
    secondTextInput->setPlaceholderText("Enter second sentence");
    getLayout()->addWidget(firstTextInput);
    getLayout()->addWidget(secondTextInput);
    getLayout()->addWidget(res);
    getLayout()->addWidget(getSolveButton());
    getLayout()->addWidget(getCloseButton());
    connect(getSolveButton(), &QPushButton::clicked, this, &task194Window::solve);
    qInfo()<<"End| task194Window(QWidget *parent)\n";

}
QVector<QString> task194Window::parse(const QString &text, QChar delimiter) {
    qInfo()<<"EntryPoint| task194Window::parse(const QString &text,QChar delimiter)\n";
    QVector<QString> parsed;
    QString buffer;
    for (int i = 0;i<text.length();i++) {
        if (text[i] == delimiter) {
            parsed.push_back(buffer);
            buffer.clear();
        }
        buffer.push_back(text[i]);
    }
    if (!buffer.isEmpty()) {
        parsed.push_back(buffer);
    }
    return parsed;
}

void task194Window::solve() {
    qInfo()<<"EntryPoint| task194Window::solve()\n";
    auto firstText = parse(firstTextInput->toPlainText());

    auto secondText = parse(secondTextInput->toPlainText());


    QMap<QString,int> firstTextStringCounter;
    QMap<QString,int> secondTextStringCounter;
    for (auto &x : firstText) {
        ++firstTextStringCounter[x];
    }
    for (auto &x : secondText) {
        ++secondTextStringCounter[x];
    }
    QString ans;
    for (auto x : firstText) {
        if (secondTextStringCounter[x]==0) {
            ans.push_back(x);
            ans.push_back(' ');
        }
    }
    for (auto x : secondText) {
        if (firstTextStringCounter[x]==0) {
            ans.push_back(x);
            ans.push_back(' ');
        }
    }

    res->setWordWrap(true);
    res->setText(ans);
    qInfo()<<"End| task194Window::solve()\n";
}
