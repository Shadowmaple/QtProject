#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <newwindow.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_button1_clicked();

    void on_button2_clicked();

private:
    Ui::MainWindow *ui;
    Frame *new_win1;
//    Frame *f1;
};

#endif // MAINWINDOW_H
