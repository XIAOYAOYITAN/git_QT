#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    serial = new QSerialPort(this);

    serialInit();       //串口的初始化

    connect(serial, &QSerialPort::readyRead, this, &MainWindow::readData);      //串口中每读到一次数据，触发一次readData函数
}

MainWindow::~MainWindow()
{
    delete ui;
}
/*点击打开串口的按钮之后
1. 更新用户选中的端口
2. 更新用户设置的参数
3. 表明每次修改参数以后要重新打开端口才奏效*/
void MainWindow::on_pushButton_clicked()
{
    if(0 == serialFlag)
    {
        for(int i=0; i<5; i++)
        {
            if(serialInfo[i].portName() == ui->BoxPort->currentText())     //更新选中的串口
            {
                serial->setPort(serialInfo[i]);
            }
        }

        if(serial->open(QIODevice::ReadWrite))      //开启串口
        {
            serialFlag = 1;
            ui->labelState->setText("打开");      //label显示串口状态
            serial->setPortName(ui->BoxPort->currentText());    //设置端口名
            serial->setBaudRate(ui->BoxBaudRate->currentText().toInt());    //设置波特率
            serial->setDataBits(QSerialPort::Data8);    //设置8个数据位
            serial->setParity(QSerialPort::NoParity);   //设置无校验位
            serial->setStopBits(QSerialPort::OneStop);  //设置停止位
            serial->setFlowControl(QSerialPort::NoFlowControl);     //设置无流控制
        }
    }
    else if(1 == serialFlag)
    {
        serial->close();
        serialFlag = 0;
        ui->labelState->setText("关闭");
    }
}

/*清空接收区按钮*/
void MainWindow::on_ButtonClear_clicked()
{
    ui->textReceive->clear();       //清空文本内容
}

/*发送区按钮*/
void MainWindow::on_ButtonSend_clicked()
{
    QString msg = ui->textSend->toPlainText();        //获取文本输入框的内容
    serial->write(msg.toLocal8Bit());        //转成字节数组发送
}

/*这个函数用来读取串口的所有数据*/
void MainWindow::readData()
{
    QByteArray buf;//新建一个字节数组
    buf = serial->readAll();        //读取串口数据
    QString str = QString::fromLocal8Bit( buf );
    ui->textReceive->appendPlainText(str);       //追加串口内容
}

/*串口初始化函数*/
void MainWindow::serialInit()
{
    int i = 0;
    //用for循环扫一遍设备管理器中所有的COM口，在终端重打印端口名称
    foreach(const QSerialPortInfo & info, QSerialPortInfo::availablePorts())
    {
        qDebug() << "portName:" << info.portName();
        qDebug() << "Description:" << info.description();

        serialInfo[i] = info;		//定义5个串口信息数组保存各个串口的信息
        serial->setPort(info);      //绑定串口
        if(serial->open(QIODevice::ReadWrite))	//第一次打开串口，看看串口能不能正常打开
        {
            ui->BoxPort->addItem(info.portName());
            serial->close();		//初始化后默认串口关闭的
        }
        i++;
    }

    QStringList baudList;//波特率，定义一个字符串类型的列表
    QStringList parityList;//校验位
    QStringList dataBitsList;//数据位
    QStringList stopBitsList;//停止位

    baudList << "4800" << "9600" << "19200" << "115200" << "128000" << "256000";     //把可选择的波特率放进去
    ui->BoxBaudRate->addItems(baudList);
    ui->BoxBaudRate->setCurrentIndex(0);//默认4800

    parityList << "No";        //设置奇偶校验位
    ui->BoxParity->addItems(parityList);
    ui->BoxParity->setCurrentIndex(0);

    dataBitsList << "8";       //设置数据位
    ui->BoxDataBit->addItems(dataBitsList);
    ui->BoxDataBit->setCurrentIndex(0);

    stopBitsList << "1";      //设置停止位
    ui->BoxStopBit->addItems(stopBitsList);
    ui->BoxStopBit->setCurrentIndex(0);
}

