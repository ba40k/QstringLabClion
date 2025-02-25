//
// Created by radamir on 25.02.25.
//

#include "task182Window.h"

task182Window::task182Window(QWidget *parent) : taskWindow(parent){
    setWindowTitle("task182 solver");
    res = new QLabel();
    inputText = new QTextEdit();
    inputText->setPlaceholderText("Enter sentence");
    inputChar = new QLineEdit();
    inputChar->setPlaceholderText("Enter char");
    getLayout()->addWidget(inputText);
    getLayout()->addWidget(inputChar);
    getLayout()->addWidget(res);
    getLayout()->removeWidget(getSolveButton()); // так как кнопка создалась в конструкторе родителся, то она появилась сверху
    getLayout()->addWidget(getSolveButton());

    connect(getSolveButton(), &QPushButton::clicked, this, &task182Window::solve);
}
void task182Window::solve() {
    QString input = inputText->toPlainText();
    QChar wordStarer = inputChar->text()[0];
    bool newWord = true;
    QString ans;
    for (int i =0; i < input.length(); i++) {
        if (input[i]==wordStarer && newWord) {
            while (input[i]!=' ' && i!=input.length()) {
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
