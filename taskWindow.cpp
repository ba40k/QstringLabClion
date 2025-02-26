//
// Created by radamir on 25.02.25.
//

#include "taskWindow.h"


taskWindow::taskWindow(QWidget *parent )  : QMainWindow(parent) {
        qInfo()<<"EntryPoint| taskWindow(QWidget *parent)\n";
        setGeometry(300, 300, 400, 200);
        solveButton = new QPushButton("Solve");
        layout = new QVBoxLayout();
        centralWidget = new QWidget();
        centralWidget->setLayout(layout);
        closeButton = new QPushButton("Close");
        setCentralWidget(centralWidget);
        connect(closeButton, &QPushButton::clicked, this, &QWidget::close);
        qInfo()<<"End| taskWindow(QWidget *parent)\n";
}

QPushButton *taskWindow::getCloseButton() {
        qInfo()<<"EntryPoint| TaskWindow::getCloseButton()\n";
        qInfo()<<"End| TaskWindow::getCloseButton()\n";
        return closeButton;
}

QPushButton *taskWindow::getSolveButton() {
        qInfo()<<"EntryPoint| TaskWindow::getSolveButton()\n";
        qInfo()<<"End| TaskWindow::getSolveButton()\n";
        return solveButton;
}

QLayout* taskWindow::getLayout() {
        qInfo()<<"EntryPoint| TaskWindow::getLayout()\n";
        qInfo()<<"End| TaskWindow::getLayout()\n";
        return layout;
}
taskWindow::~taskWindow() {
        qInfo()<<"EntryPoint| ~taskWindow()\n";
        qInfo()<<"End| TaskWindow::~taskWindow()\n";
}
