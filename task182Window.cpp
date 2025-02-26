//
// Created by radamir on 25.02.25.
//

#include "task182Window.h"
#include"logger.h"
static Logger logger;
task182Window::task182Window(QWidget *parent) : taskWindow(parent){
    qInfo("EntryPoint| task182Window(QWidget *parent)\n");
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
    qInfo("End| task182Window(QWidget *parent)\n");
}
void task182Window::solve() {
    qInfo("EntryPoint| task182Window::solve()\n");
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
    qInfo("End| task182Window::solve()\n");
}
