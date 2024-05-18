#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QLabel *label1 = new QLabel(ui->centralwidget);
    label1->setText("pp");
    label1->resize(500,100);
    label1->move(50, 50);
    label1->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}
