#include "mainwindow.h"
#include <QApplication>
#include "logindialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
//    w.show();

    LoginDialog ldlg;
    if (ldlg.exec() == QDialog::Accepted) {
        w.show();
        return a.exec();
    }
    return 0;

//    return a.exec();
}
