//
// Created by radamir on 25.02.25.
//

#ifndef TASK182WINDOW_H
#define TASK182WINDOW_H
#include <QMainWindow>
#include <QLabel>
#include <QVBoxLayout>
#include <QWidget>

class task182Window : public QMainWindow {
    Q_OBJECT

public:
    task182Window(QWidget *parent = nullptr) : QMainWindow(parent) {
        setWindowTitle("task182Window");
        setGeometry(300, 300, 300, 200);

        QVBoxLayout *layout = new QVBoxLayout();
        QLabel *label = new QLabel("This is the task182Window");
        layout->addWidget(label);

        QWidget *container = new QWidget();
        container->setLayout(layout);
        setCentralWidget(container);
    }
};

#endif //TASK182WINDOW_H
