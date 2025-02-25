//
// Created by radamir on 25.02.25.
//

#ifndef TASKWINDOW_H
#define TASKWINDOW_H
#include <QLineEdit>

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>

class taskWindow : public QMainWindow {
protected:
    Q_OBJECT
    QVBoxLayout *layout;
    QWidget *centralWidget;
    QPushButton *solveButton;
    QPushButton *closeButton;
public:
    taskWindow(QWidget *parent = nullptr);
    virtual void solve() ;
    virtual ~taskWindow();
    QLayout* getLayout();
    QPushButton* getSolveButton();
    QPushButton* getCloseButton();
};



#endif //TASKWINDOW_H
