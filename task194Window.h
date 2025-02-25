//
// Created by radamir on 25.02.25.
//

#ifndef TASK194WINDOW_H
#define TASK194WINDOW_H
#include <QMainWindow>
#include <QLabel>
#include <QVBoxLayout>
#include <QWidget>

class task194Window : public QMainWindow {
    Q_OBJECT

public:
    task194Window(QWidget *parent = nullptr) : QMainWindow(parent) {
        setWindowTitle("task194Window");
        setGeometry(300, 300, 300, 200);

        QVBoxLayout *layout = new QVBoxLayout();
        QLabel *label = new QLabel("This is the task194Window");
        layout->addWidget(label);

        QWidget *container = new QWidget();
        container->setLayout(layout);
        setCentralWidget(container);
    }
};

#endif //TASK194WINDOW_H
