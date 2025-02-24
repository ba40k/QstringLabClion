#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QLabel>
#include<QString>
#include<QHBoxLayout>
#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
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
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
