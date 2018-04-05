#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtSerialPort/QSerialPortInfo>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/qserialport.h>
#include <QtSerialPort/QtSerialPort>
#include <QtSerialPort/qserialportglobal.h>
#include <QDebug>
#include <QString>
#include <stdio.h>
#include <stdlib.h>
#include "QMessageBox"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QSerialPort *serial;
    QString come_port;
    void delay(int t_ms);
    QString convertToString(uint8_t *str);
private slots:
    void on_scan_clicked();

    void on_connect_clicked();

    void on_pushButton_clicked();
    void machineState();
    void on_sendBtn_clicked();

    void on_fetch_clicked();

    void on_fetchChannel_clicked();

    void on_Store_clicked();

    void on_action_3_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
