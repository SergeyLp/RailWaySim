/*
* This is an independent project of an individual developer. Dear PVS-Studio, please check it.
* PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
*/
#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    game.sampleInit();
    createStatusBar();

    //this->setText("Hello!!!");
}

void MainWindow::createStatusBar(){
    QString s;
    for (const auto& sp : game.sp()) {
        s = sp.name();
    }


    label1 = new QLabel(s/*" Hello !!!"*/);
    statusBar()->addWidget(label1);

    //updateStatusBar();

}

MainWindow::~MainWindow()
{
    delete ui;
}
