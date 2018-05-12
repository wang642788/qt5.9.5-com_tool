#ifndef COM_TOOL_H
#define COM_TOOL_H

#include <QMainWindow>

namespace Ui {
class com_tool;
}

class com_tool : public QMainWindow
{
    Q_OBJECT

public:
    explicit com_tool(QWidget *parent = 0);
    ~com_tool();

private:
    Ui::com_tool *ui;
};

#endif // COM_TOOL_H
