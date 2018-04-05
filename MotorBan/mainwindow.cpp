#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    ui->raiwan->setText("<a href=\"http://google.com/\">Raiwan</a>");
//    ui->raiwan->setStyleSheet("font-weight: 900;font-size: 36px;text-decoration: none;");
//    ui->raiwan->setTextFormat(Qt::RichText);
//    ui->raiwan->setTextInteractionFlags(Qt::TextBrowserInteraction);
//    ui->raiwan->setOpenExternalLinks(true);

    ui->user->setStyleSheet("font-weight: 450;font-size: 28px;");
    ui->Admin->setStyleSheet("font-weight: 450;font-size: 28px;");
    ui->channelName->setStyleSheet("font-weight: 450;font-size: 28px;");

    ui->userLab1->setStyleSheet("font-weight: 450;font-size: 20px;");
    ui->userLab2->setStyleSheet("font-weight: 450;font-size: 20px;");
    ui->userLab3->setStyleSheet("font-weight: 450;font-size: 20px;");
    ui->adminLab1->setStyleSheet("font-weight: 450;font-size: 20px;");
    ui->adminLab2->setStyleSheet("font-weight: 450;font-size: 20px;");

    ui->channel1Label->setStyleSheet("font-weight: 450;font-size: 20px;");
    ui->channel1Label_2->setStyleSheet("font-weight: 450;font-size: 20px;");
    ui->channel1Label_3->setStyleSheet("font-weight: 450;font-size: 20px;");
    ui->channel1Label_4->setStyleSheet("font-weight: 450;font-size: 20px;");
    ui->channel1Label_5->setStyleSheet("font-weight: 450;font-size: 20px;");
    ui->channel1Label_6->setStyleSheet("font-weight: 450;font-size: 20px;");
//    ui->connect->setStyleSheet("background-color:green;color:white;");
//    ui->pushButton->setStyleSheet("background-color:red;color:white;");
//    ui->scan->setStyleSheet("background-color:blue;color:white;");
    // Serial Port
      serial = new QSerialPort(this);
      serial->close();
      serial->setBaudRate(QSerialPort::Baud9600);
      serial->setDataBits(QSerialPort::Data8);
      serial->setParity(QSerialPort::NoParity);
      serial->setStopBits(QSerialPort::OneStop);
      serial->setFlowControl(QSerialPort::NoFlowControl);

      // Discnnect
      ui->pushButton->setDisabled(true);
}

MainWindow::~MainWindow()
{
    serial->close();
    delete serial;
    delete ui;
}

void MainWindow::delay(int t_ms)
{
    QTime dieTime= QTime::currentTime().addMSecs(t_ms);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

QString MainWindow::convertToString(uint8_t *str)
{
    return QString((char *)str);
}

//*******************
void MainWindow::machineState()
{
    delay(1000);
    QByteArray data;
    QChar test;
    data = serial->readAll();
    uint8_t data_buffr[11],tempData,channel1_buffer[20],channel2_buffer[20],channel3_buffer[20],channel4_buffer[20],channel5_buffer[20],channel6_buffer[20];
    QString temp,tempBuffer ;
    int state = 0 ;
   int counter = 0 ;
  if( data.size() > 3) {
    for(int i=0 ; i < data.size() ; i++ )
    {
        switch (state) {
        case 0:
             if(data[i] == '*')
             {
                 state++;
             }
            break;
        case 1:
             if(data[i] == '*')
             {
                 temp = convertToString(data_buffr);
                 temp = temp.left(temp.length()-1);
                 qDebug() << "temp 1 " << temp ;
                 ui->adminNum1->setText(temp);
                 state++;
             } else
             {
                 data_buffr[i-state] = data[i] ;
//                 qDebug() << "data_buffr" << i-state << ":" << data_buffr[i-state] ;
             }

            break;
        case 2:
             if(data[i] == '*')
             {
                 temp = convertToString(data_buffr);
                 temp = temp.left(temp.length()-1);
                 qDebug() << "temp 2 " << temp ;
                 ui->adminNum2->setText(temp);
                 state++;
             } else {
                 data_buffr[i-state-11] = data[i] ;
//                 qDebug() << "data_buffr" << i-state-11 << ":" << data_buffr[i-state-11] ;
             }
            break;
        case 3:
             if(data[i] == '*')
             {
                 temp = convertToString(data_buffr);
                 temp = temp.left(temp.length()-1);
                 qDebug() << "temp 3 " << temp ;
                 ui->userNum1->setText(temp);
//                 ui->userNum1->setText("phoneNumber 3");
                 state++;
             } else {
                 data_buffr[i-state-22] = data[i] ;
//                 qDebug() << "data_buffr" << i-state-22 << ":" << data_buffr[i-state-22] ;
             }
            break;
        case 4:
             if(data[i] == '*')
             {
                 temp = convertToString(data_buffr);
                 temp = temp.left(temp.length()-1);
                 qDebug() << "temp 4 " << temp ;
                 ui->userNum2->setText(temp);
//                 ui->userNum2->setText("phoneNumber 4");
                 state++;
             } else {
                 data_buffr[i-state-33] = data[i] ;
//                 qDebug() << "data_buffr" << i-state-33 << ":" << data_buffr[i-state-33] ;
             }
            break;
        case 5:
             if(data[i] == '*')
             {
                 temp = convertToString(data_buffr);
                 temp = temp.left(temp.length()-1);
                 qDebug() << "temp 5 " << temp ;
                 ui->userNum3->setText(temp);
//                 ui->userNum3->setText("phoneNumber 5");
                 state++;
             } else {
                 data_buffr[i-state-44] = data[i] ;
//                 qDebug() << "data_buffr" << i-state-44 << ":" << data_buffr[i-state-44] ;
             }
            break;
        case 6:
             if(data[i] == '*')
             {
                 ui->channel1->setText(tempBuffer);tempBuffer ="";
                 state++;
             } else {
                 tempData = data[i] ;
                 tempBuffer.append(tempData);
             }
            break;
        case 7:
            if(data[i] == '*')
            {
                ui->channel2->setText(tempBuffer);tempBuffer ="";
                state++;
            } else {
                tempData = data[i] ;
                tempBuffer.append(tempData);
            }
            break;
        case 8:
            if(data[i] == '*')
            {
                ui->channel3->setText(tempBuffer);tempBuffer ="";
                state++;
            } else {
                tempData = data[i] ;
                tempBuffer.append(tempData);
            }
            break;
        case 9:
            if(data[i] == '*')
            {
                ui->channel4->setText(tempBuffer);tempBuffer ="";
                state++;
            } else {
                tempData = data[i] ;
                tempBuffer.append(tempData);
            }
            break;
        case 10:
            if(data[i] == '*')
            {
                ui->channel5->setText(tempBuffer);tempBuffer ="";
                state++;
            } else {
                tempData = data[i] ;
                tempBuffer.append(tempData);
            }
            break;
        case 11:
            if(data[i] == '*')
            {
                ui->channel6->setText(tempBuffer);tempBuffer ="";
                state++;
                QMessageBox::information(this,tr("پیام"),tr("داده ها بارگیری شد"));
            } else {
                tempData = data[i] ;
                tempBuffer.append(tempData);
            }
            break;
        default:
            break;
        }
      qDebug() << "data" << i << ":" << data[i] ;
    }
  }
}


void MainWindow::on_scan_clicked()
{
    ui->comboBox->clear();
    Q_FOREACH(QSerialPortInfo port, QSerialPortInfo::availablePorts()) {


           ui->comboBox->addItem(port.portName());

    }
}

void MainWindow::on_connect_clicked()
{
    if(ui->comboBox->currentText() != NULL) {

        serial->close();
        come_port = ui->comboBox->currentText();

        serial->setPortName(come_port);

        serial->close();

        while(!serial->open(QIODevice::ReadWrite));
        connect(serial, SIGNAL(readyRead()), SLOT(machineState()));
        ui->connect->setDisabled(true);
        ui->pushButton->setEnabled(true);
        if(serial->isOpen())
        {
            qDebug() << "is Open " ;
        }
    }
}
// Disconnect
void MainWindow::on_pushButton_clicked()
{
    serial->close();
    ui->pushButton->setDisabled(true);
    ui->connect->setEnabled(true);


}

void MainWindow::on_sendBtn_clicked()
{
   QRegExp re("\\d*");
   QString userNum1,userNum2,userNum3,adminNum1,adminNum2 ;
   QString channel1,channel2,channel3,channel4,channel5,channel6 ;
   QByteArray temp1,temp2,temp3,temp4,temp5,temp6,temp7,temp8,temp9,temp10,temp11;
   userNum1 = ui->userNum1->text();
   userNum2 = ui->userNum2->text();
   userNum3 = ui->userNum3->text();
   adminNum1 = ui->adminNum1->text();
   adminNum2 = ui->adminNum2->text();

   if( (userNum1.size() != 11) || (!(re.exactMatch(userNum1))) || (!(re.exactMatch(userNum2))) || (!(re.exactMatch(userNum3))) || (!(re.exactMatch(adminNum1))) || (!(re.exactMatch(adminNum2)))  || (userNum2.size() != 11) || (userNum3.size() != 11) || (adminNum1.size() != 11) || (adminNum2.size() != 11))
   {
       QMessageBox::information(this,tr("خطا"),tr("شماره تلفن  را اشتباه وارد نموده ایید"));
   } else {
       channel1 = ui->channel1->text();
       channel2 = ui->channel2->text();
       channel3 = ui->channel3->text();
       channel4 = ui->channel4->text();
       channel5 = ui->channel5->text();
       channel6 = ui->channel6->text();
    if( (channel1.size()>10) || (channel2.size()>10) || (channel3.size()>10) || (channel4.size()>10) || (channel5.size()>10) || (channel6.size()>10) )
    {
          QMessageBox::information(this,tr("خطا"),tr("اسم نباید بیش تر از 10 کاراکتر باشد"));
    } else {
       serial->write("w");
       delay(10);

       temp1.append(adminNum1);
       serial->write(temp1);
       delay(10);

       serial->write("*");
       temp2.append(adminNum2);
       delay(10);
       serial->write(temp2);
       delay(10);

       serial->write("*");
       temp3.append(userNum1);
       delay(10);
       serial->write(temp3);
       delay(10);

       serial->write("*");
       temp4.append(userNum2);
       serial->write(temp4);
       delay(10);

       serial->write("*");
       temp5.append(userNum3);
       delay(10);
       serial->write(temp5);
       delay(10);

       serial->write("*");
       temp6.append(channel1);
       delay(10);
       serial->write(temp6);
       delay(10);

       serial->write("*");
       temp7.append(channel2);
       delay(10);
       serial->write(temp7);
       delay(10);

       serial->write("*");
       temp8.append(channel3);
       delay(10);
       serial->write(temp8);
       delay(10);

       serial->write("*");
       temp9.append(channel4);
       delay(10);
       serial->write(temp9);
       delay(10);

       serial->write("*");
       temp10.append(channel5);
       delay(10);
       serial->write(temp10);
       delay(10);

       serial->write("*");
       temp11.append(channel6);
       delay(10);
       serial->write(temp11);
       delay(10);

       serial->write("*");
       serial->write("q");
       QMessageBox::information(this,tr("پیام"),tr("داده ها بارگزاری شد"));
   }
  }
}

void MainWindow::on_fetch_clicked()
{
    serial->write("r");
}

void MainWindow::on_fetchChannel_clicked()
{
    serial->write("t");
}

void MainWindow::on_Store_clicked()
{
    QString channel1,channel2,channel3,channel4,channel5,channel6 ;
    QByteArray temp1,temp2,temp3,temp4,temp5,temp6;
    channel1 = ui->channel1->text();
    channel2 = ui->channel2->text();
    channel3 = ui->channel3->text();
    channel4 = ui->channel4->text();
    channel5 = ui->channel5->text();
    channel6 = ui->channel6->text();

    serial->write("c");
    delay(10);
    temp1.append(channel1);
 //   qDebug() << "temp1 : " << temp1 ;
    serial->write(temp1);
    delay(10);
    serial->write("*");
    temp2.append(channel2);
 //   qDebug() << "temp2 : " << temp2 ;
    delay(10);
    serial->write(temp2);
    delay(10);
    serial->write("*");
    temp3.append(channel3);
 //   qDebug() << "temp3 : " << temp3 ;
    delay(10);
    serial->write(temp3);
    delay(10);
    serial->write("*");
    temp4.append(channel4);
 //   qDebug() << "temp4 : " << temp4 ;
    serial->write(temp4);
    delay(10);
    serial->write("*");
    temp5.append(channel5);
    delay(10);
    serial->write(temp5);
 //   qDebug() << "temp5 : " << temp5 ;
    delay(10);
    serial->write("*");
    temp6.append(channel6);
    delay(10);
    serial->write(temp6);
 //   qDebug() << "temp5 : " << temp5 ;
    delay(10);
    serial->write("*");
}

void MainWindow::on_action_3_triggered()
{
    QString str;

    str = QString("www.raiwan.ir \n02166381295-96 \n09385931158 ");
    QMessageBox::information(this,tr("درباره ما "),str);
}
