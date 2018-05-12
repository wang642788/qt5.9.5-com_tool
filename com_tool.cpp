#include "com_tool.h"
#include "ui_com_tool.h"

com_tool::com_tool(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::com_tool)
{
    ui->setupUi(this);
}

com_tool::~com_tool()
{
    delete ui;
}
