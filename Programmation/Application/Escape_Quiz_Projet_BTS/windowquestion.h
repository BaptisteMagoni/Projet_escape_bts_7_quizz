#ifndef WINDOWQUESTION_H
#define WINDOWQUESTION_H

#include <QWidget>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QFile>
#include <vector>
#include <iostream>
#include <QString>
#include <QMessageBox>
#include <QByteArray>
#include <question.h>

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
    QString m_message_error;
    QWidget *m_parent;
    QMessageBox msg_box;
    std::vector<QString> m_question;
    std::vector<QString> sequence_question;
    std::vector<int> m_error;
    std::vector<bool> m_answer_player;
    std::vector<Question> m_question_list;
    int question_number;
    int error;
    bool isMusicType;


private:
    void read_one_question();
    void open_file();
    void change_page();
    void init_button_event();
    void check_answer(QString answerplayer);
    void display_question(QString question, QString answer1, QString answer2, QString answer3);
    void reset();
    void display_message_error();
    void sendData(const QByteArray &data);
    void set_state_button(bool state);
    int get_nb_question();
    QString int_to_str(int num);
    void addQuestion(QString question, QString answer1, QString answer2, QString answer3);

private slots:
    void event_button();
    void read_data();

};

#endif // WINDOWQUESTION_H
