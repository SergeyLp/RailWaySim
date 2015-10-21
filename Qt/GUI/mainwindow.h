#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>


#include "../../Core/global.h"
#include "../../Core/Game.h"


using namespace Railway;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    void createStatusBar();
    Ui::MainWindow *ui;
    QLabel* label1;
    Game game;
};

#endif // MAINWINDOW_H
