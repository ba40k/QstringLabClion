//
// Created by radamir on 25.02.25.
//

#include "task182Window.h"
#include <iostream>
task182Window::task182Window(QWidget *parent) : taskWindow(parent){
    setWindowTitle("task182");
    res = new QLabel();
    inputText = new QTextEdit();
    inputText->setPlaceholderText("Enter sentence");
    inputChar = new QLineEdit();
    inputChar->setPlaceholderText("Enter char");
    getLayout()->addWidget(inputText);
    getLayout()->addWidget(inputChar);
    getLayout()->addWidget(res);
    getLayout()->addWidget(getSolveButton());
    getLayout()->addWidget(getCloseButton());
    connect(getSolveButton(), &QPushButton::clicked, this, &task182Window::solve);
}
void task182Window::solve() {
    QString input = inputText->toPlainText();
    QChar wordStarer = inputChar->text()[0];
    bool newWord = true;
    QString ans;
    for (int i =0; i < input.length(); i++) {
        if (input[i]==wordStarer && newWord) {
            while( i!=input.length() && (input[i]!=' ')) {
                ans.push_back(input[i]);
                i++;
            }
            break;
        }
        newWord = false;
        if (input[i]==' ') {
            newWord = true;
        }
    }
    if (ans.length()==0) {
        res->setText("No such string");
    } else {
        res->setText(ans);
    }
}
