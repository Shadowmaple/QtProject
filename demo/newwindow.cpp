#include "newwindow.h"
#include "ui_newwindow.h"

Frame::Frame(QWidget *parent):
    QFrame(parent),
    ui(new Ui::Frame)
{
    ui->setupUi(this);
}

Frame::~Frame()
{
    delete ui;
}
