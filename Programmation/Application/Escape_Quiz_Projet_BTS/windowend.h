#ifndef WINDOWEND_H
#define WINDOWEND_H

#include <QWidget>
#include <QSerialPort>
#include <iostream>

namespace Ui {
    class ApplicationEnd;
}

class WindowEnd : public QWidget
{

    Q_OBJECT

public:
    WindowEnd(QWidget *parent, QSerialPort *serial, std::vector<bool> score);
    ~WindowEnd();

private:
    Ui::ApplicationEnd *we;
};

#endif // WINDOWEND_H
