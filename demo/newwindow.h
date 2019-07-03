#ifndef NEWWINDOW_H
#define NEWWINDOW_H

#include <QFrame>

namespace Ui {
class Frame;
}

class Frame : public QFrame
{
    Q_OBJECT

public:
    explicit Frame(QWidget *parent = 0);
    ~Frame();

private slots:
    void on_button1_clicked();

private:
    Ui::Frame *ui;
};

#endif // NEWWINDOW_H
