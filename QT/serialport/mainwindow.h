#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void serialInit();      //串口初始化程序

private slots:
    void on_pushButton_clicked();//打开串口开关

    void on_ButtonClear_clicked();//清空窗口按钮

    void on_ButtonSend_clicked();//发送数据按钮

    void readData();


private:
    Ui::MainWindow *ui;
    QSerialPort * serial;          //串口对象
    char serialFlag = 0;           //串口状态：0为关闭，1为打开
    QSerialPortInfo serialInfo[5];//定义串口信息数组存放可使用的串口
};
#endif // MAINWINDOW_H
