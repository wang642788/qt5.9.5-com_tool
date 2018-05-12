#include "comtool_mainwindow.h"
#include "base.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    int i;
    QApplication a(argc, argv);
    ComTool_MainWindow w;

    for(i = 0; i < argc; ++i)
        printf("%d: %s\n", i, argv[i]);
    //w.show();
    serial_open("123");
    printf("hello\n");

    return 0;
    //return a.exec();
}
