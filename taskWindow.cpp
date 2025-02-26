//
// Created by radamir on 25.02.25.
//

#include "taskWindow.h"
#include"logger.h"
static Logger logger;

TaskWindow::TaskWindow(QWidget *parent )  : QMainWindow(parent) {
        qInfo()<<"EntryPoint| TaskWindow(QWidget *parent)\n";
        setGeometry(300, 300, 400, 200);
        solveButton = new QPushButton("Solve");
        layout = new QVBoxLayout();
        centralWidget = new QWidget();
        centralWidget->setLayout(layout);
        closeButton = new QPushButton("Close");
        setCentralWidget(centralWidget);
        connect(closeButton, &QPushButton::clicked, this, &QWidget::close);
        qInfo()<<"End| TaskWindow(QWidget *parent)\n";
}

QPushButton *TaskWindow::getCloseButton() {
        qInfo()<<"EntryPoint| TaskWindow::getCloseButton()\n";
        qInfo()<<"End| TaskWindow::getCloseButton()\n";
        return closeButton;
}

QPushButton *TaskWindow::getSolveButton() {
        qInfo()<<"EntryPoint| TaskWindow::getSolveButton()\n";
        qInfo()<<"End| TaskWindow::getSolveButton()\n";
        return solveButton;
}

QLayout* TaskWindow::getLayout() {
        qInfo()<<"EntryPoint| TaskWindow::getLayout()\n";
        qInfo()<<"End| TaskWindow::getLayout()\n";
        return layout;
}
TaskWindow::~TaskWindow() {
        qInfo()<<"EntryPoint| ~TaskWindow()\n";
        qInfo()<<"End| TaskWindow::~TaskWindow()\n";
}
