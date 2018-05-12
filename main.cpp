#include "comtool_mainwindow.h"
#include <QApplication>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ComTool_MainWindow w;
    w.show();

    printf("hello\n");

    return a.exec();
}
