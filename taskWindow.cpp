//
// Created by radamir on 25.02.25.
//

#include "taskWindow.h"
taskWindow::taskWindow(QWidget *parent )  : QMainWindow(parent) {
        setGeometry(300, 300, 300, 200);

        layout = new QVBoxLayout();
        centralWidget = new QWidget();
        centralWidget->setLayout(layout);
        setCentralWidget(centralWidget);
}
taskWindow::~taskWindow() {
        // Очистка ресурсов, если необходимо
}