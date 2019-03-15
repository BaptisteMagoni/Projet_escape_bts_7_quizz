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
#include <client.h>

namespace Ui{
    class ApplicationQuestion;
}

class WindowQuestion : public QWidget
{

    Q_OBJECT

public:
    WindowQuestion(QWidget *parent, QSerialPort *serial, QString type_question, Client *client, bool demo);
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
    std::vector<QString> m_data_rx;
    std::vector<QPushButton*> m_list_button;
    int question_number;
    int error;
    bool isMusicType;
    Client *m_client;
    bool m_demo;


private:
    void read_one_question();
    void open_file();
    void change_question();
    void init_button_event();
    void check_answer(QString answerplayer);
    void display_question(QString question, QString answer1, QString answer2, QString answer3);
    void reset();
    void display_message_error();
    void sendData(const QByteArray &data);
    void set_state_button(bool state);
    int get_nb_question();
    QString int_to_str(int num);

private slots:
    void event_button();
    void read_data();
    void rejouer();

};

#endif // WINDOWQUESTION_H
