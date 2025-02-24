#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    centralWidget = new QWidget(this);
    setMinimumHeight(300);
    setMinimumWidth(300);
    setWindowTitle("TaskSolver");
    mainMenuLayout = new QVBoxLayout;
    centralWidget->setLayout(mainMenuLayout);
    greetingMessage = new QLabel("Which task do you want to solve?",centralWidget);
    greetingMessageFont = greetingMessage->font();
    greetingMessageFont.setPointSize(20);
    greetingMessage->setFont(greetingMessageFont);

    greetingMessage->setWordWrap(true);
    greetingMessage->setAlignment(Qt::AlignCenter);

    greetingMessageBox = new QHBoxLayout(centralWidget);
    greetingMessageBox->addWidget(greetingMessage);

    buttonForTask170 = new QPushButton(centralWidget);
    buttonForTask170->setText("task 170");
    buttonForTask182 = new QPushButton(centralWidget);
    buttonForTask182->setText("task 182");
    buttonForTask194 = new QPushButton(centralWidget);
    buttonForTask194->setText("task 194");
    buttonsBox = new QHBoxLayout(centralWidget);
    buttonsBox->addWidget(buttonForTask170);
    buttonsBox->addWidget(buttonForTask182);
    buttonsBox->addWidget(buttonForTask194);

    mainMenuLayout->addLayout(greetingMessageBox);
    mainMenuLayout->addLayout(buttonsBox);

    setCentralWidget(centralWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}
