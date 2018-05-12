#include "com_tool.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    com_tool w;
    w.show();

    return a.exec();
}
