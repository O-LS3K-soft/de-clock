#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDateTime>
#include <QTime>
#include <QTimer>
#include <QString>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_lcdNumber_overflow();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QTimer* DateTime;
};
#endif // MAINWINDOW_H
