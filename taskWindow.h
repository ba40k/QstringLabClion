//
// Created by radamir on 25.02.25.
//

#ifndef TASKWINDOW_H
#define TASKWINDOW_H
#include <QLineEdit>

#include <QMainWindow>
#include <QLabel>
#include <QVBoxLayout>
#include <QWidget>

class taskWindow : public QMainWindow {
    Q_OBJECT
    QVBoxLayout *layout;
    QWidget *centralWidget;
public:
    taskWindow(QWidget *parent = nullptr);
    virtual void solve() = delete;
    virtual ~taskWindow();
};



#endif //TASKWINDOW_H
