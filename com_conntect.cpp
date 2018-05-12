#include "base.h"

QSerialPort *serial = new QSerialPort;

void serial_open(const char *name)
{
    printf("%s\n", name);
    qDebug("adfsaf\n");
    serial->setPortName("COM6");

}
