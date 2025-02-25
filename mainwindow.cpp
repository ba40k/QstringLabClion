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

    closeButton = new QPushButton(centralWidget);
    closeButton->setText("close");
    connect(closeButton, &QPushButton::clicked, this, &MainWindow::close);
    closeButton->setGeometry(QRect(10, 10, 50, 30));

    task170 = new task170Window(centralWidget);
    task182 = new task182Window(centralWidget);
    task194 = new task194Window(centralWidget);

    mainMenuLayout->addLayout(greetingMessageBox);
    mainMenuLayout->addLayout(buttonsBox);

    connect(buttonForTask170, &QPushButton::clicked, this, &MainWindow::solveTask170);
    connect(buttonForTask182, &QPushButton::clicked, this, &MainWindow::solveTask182);
    connect(buttonForTask194, &QPushButton::clicked, this, &MainWindow::solveTask194);

    setCentralWidget(centralWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}
