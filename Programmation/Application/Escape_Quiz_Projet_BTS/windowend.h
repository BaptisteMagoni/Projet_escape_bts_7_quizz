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
    WindowEnd(QWidget *parent, QSerialPort *serial, std::vector<bool> score, QString answer_number_all);
    ~WindowEnd();

private:
    Ui::ApplicationEnd *we;
    std::vector<bool> m_score;
    QString m_number_all;

private:
    int count_score();
};

#endif // WINDOWEND_H
