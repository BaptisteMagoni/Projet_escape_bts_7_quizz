#ifndef WINDOWQUESTION_H
#define WINDOWQUESTION_H

#include <QWidget>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QFile>
#include <vector>
#include <iostream>
#include <QString>

namespace Ui{
    class ApplicationQuestion;
}

class WindowQuestion : public QWidget
{

    Q_OBJECT

public:
    WindowQuestion(QWidget *parent, QSerialPort *serial, QString type_question);
    ~WindowQuestion();

private:
    Ui::ApplicationQuestion *wq;
    QSerialPort *m_serial;
    QString m_type_question;
    QString answer;
    std::vector<QString> m_question;
    std::vector<QString> sequence_question;
    std::vector<bool> answer_player;
    int question_number;
    QWidget *m_parent;


private:
    void read_one_question();
    void open_file();
    void change_page();
    void init_button_event();
    void check_answer(QString answerplayer);
    void display_question(QString question, QString answer1, QString answer2, QString answer3);
    int get_nb_question();
    QString int_to_str(int num);

private slots:
    void event_button();
};

#endif // WINDOWQUESTION_H
