#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "newwindow.h"
//#include "ui_newwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    new_win1 = new Frame;

//    connect(ui->button1, SIGNAL(clicked()), this, SLOT(on_button1_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_button1_clicked()
{
    close();
}

void MainWindow::on_button2_clicked()
{
//    QMainWindow *new_win1 = new QMainWindow();
    new_win1 = new Frame(this);
    new_win1->show();
}
