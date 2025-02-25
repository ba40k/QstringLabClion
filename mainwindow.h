#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QLabel>
#include<QString>
#include<QHBoxLayout>
#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include "task170Window.h"
#include "task182Window.h"
#include "task194Window.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QWidget* centralWidget;
    QVBoxLayout *mainMenuLayout;
    QLabel* greetingMessage;
    QHBoxLayout* greetingMessageBox;
    QHBoxLayout* buttonsBox;
    QFont greetingMessageFont;
    QPushButton* buttonForTask170;
    QPushButton* buttonForTask182;
    QPushButton* buttonForTask194;
    QPushButton* closeButton;
    task170Window* task170;
    task182Window* task182;
    task194Window* task194;
private slots:
    void solveTask170() {
        task170->show();
    }
    void solveTask182() {
        task182->show();
    }
    void solveTask194() {
    task194->show();
    }
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
