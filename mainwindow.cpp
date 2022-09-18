#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    DateTime = new QTimer();
    connect(DateTime, SIGNAL(timeout()), this,SLOT(on_lcdNumber_overflow()));
    DateTime->setInterval(1000);
    DateTime->start();
    this->setCentralWidget(ui->lcdNumber);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_lcdNumber_overflow()
{
    QString de_time = QDateTime::currentDateTime().toString ("hh:mm:ss");
    ui->lcdNumber->display(de_time);
}


void MainWindow::on_pushButton_clicked()
{

}

