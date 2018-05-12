#ifndef COMTOOL_MAINWINDOW_H
#define COMTOOL_MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class ComTool_MainWindow;
}

class ComTool_MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ComTool_MainWindow(QWidget *parent = 0);
    ~ComTool_MainWindow();

private:
    Ui::ComTool_MainWindow *ui;
};

#endif // COMTOOL_MAINWINDOW_H
