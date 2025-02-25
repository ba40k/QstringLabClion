//
// Created by radamir on 25.02.25.
//

#ifndef TASK170WINDOW_H
#define TASK170WINDOW_H
#include <QMainWindow>
#include <QLabel>
#include <QVBoxLayout>
#include <QWidget>

class task170Window : public QMainWindow {
    Q_OBJECT

public:
    task170Window(QWidget *parent = nullptr) : QMainWindow(parent) {
        setWindowTitle("task170Window");
        setGeometry(300, 300, 300, 200);

        QVBoxLayout *layout = new QVBoxLayout();
        QLabel *label = new QLabel("This is the task170Window");
        layout->addWidget(label);

        QWidget *container = new QWidget();
        container->setLayout(layout);
        setCentralWidget(container);
    }
};

#endif //TASK170WINDOW_H
