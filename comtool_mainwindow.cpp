#include "comtool_mainwindow.h"
#include "ui_comtool_mainwindow.h"

ComTool_MainWindow::ComTool_MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ComTool_MainWindow)
{
    ui->setupUi(this);
}

ComTool_MainWindow::~ComTool_MainWindow()
{
    delete ui;
}
