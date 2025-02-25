//
// Created by radamir on 25.02.25.
//

#include "taskWindow.h"


taskWindow::taskWindow(QWidget *parent )  : QMainWindow(parent) {
        setGeometry(300, 300, 400, 200);
        solveButton = new QPushButton("Solve");
        layout = new QVBoxLayout();
        centralWidget = new QWidget();
        centralWidget->setLayout(layout);
        closeButton = new QPushButton("Close");
        setCentralWidget(centralWidget);
        connect(closeButton, &QPushButton::clicked, this, &QWidget::close);
}
void taskWindow::solve() {

}

QPushButton *taskWindow::getCloseButton() {
        return closeButton;
}

QPushButton *taskWindow::getSolveButton() {
        return solveButton;
}

QLayout* taskWindow::getLayout() {
        return layout;
}
taskWindow::~taskWindow() {

}