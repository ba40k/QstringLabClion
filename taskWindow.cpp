//
// Created by radamir on 25.02.25.
//

#include "taskWindow.h"


taskWindow::taskWindow(QWidget *parent )  : QMainWindow(parent) {
        setGeometry(300, 300, 300, 200);
        solveButton = new QPushButton("Solve");
        layout = new QVBoxLayout();
        layout->addWidget(solveButton);
        centralWidget = new QWidget();
        centralWidget->setLayout(layout);
        setCentralWidget(centralWidget);
}
void taskWindow::solve() {

}
QPushButton *taskWindow::getSolveButton() {
        return solveButton;
}

QLayout* taskWindow::getLayout() {
        return layout;
}
taskWindow::~taskWindow() {
        // Очистка ресурсов, если необходимо
}