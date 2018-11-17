#include "windowquestion.h"

#include "ui_windowquestion.h"

#include <QSerialPort>
#include <QSerialPortInfo>
#include <windowchoice.h>
#include <windowend.h>
#include <iostream>
#include <QFileDialog>
#include <QMessageBox>
#include <QFile>
#include <QStringList>
#include <QTextStream>
#include <string>
#include <sstream>
#include <QMessageBox>

using namespace std;

WindowQuestion::WindowQuestion(QWidget *parent, QSerialPort *serial, QString type_button) :
    QWidget(parent),
    wq(new Ui::ApplicationQuestion)
{
    wq->setupUi(this);
    m_parent = parent;
    question_number = 1;
    error = 0;
    m_serial = serial;
    m_type_question = type_button;
    if(m_type_question == "musical")
        isMusicType = true;
    else
        isMusicType = false;
    init_button_event();
    open_file();
    change_page();
    read_one_question();
}

WindowQuestion::~WindowQuestion()
{
    delete wq;
}

void WindowQuestion::open_file(){
    QString nom_fichier = "mes_quizz/quizz_" + m_type_question + ".quizz";
    if(nom_fichier.isEmpty()) return;

    QFile file(nom_fichier);

    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(this, "Impossible d'ouvrir le fichier.", file.errorString());
    else{
        QTextStream flux(&file);
        flux.setCodec("UTF-8");
        QString ligne;
        while(!flux.atEnd()){
            ligne = flux.readLine();

            if(!ligne.startsWith("#"))
                m_question.push_back(ligne);
        }
    }
}

void WindowQuestion::read_one_question(){
    for(unsigned int i=0;i<m_question.size();i++){
        if(m_question.at(i).compare("QuestionStart_"+int_to_str(question_number)) == 0){
            QStringList question_list = m_question.at(i+1).split(":");
            QStringList answer1 = m_question.at(i+2).split(":");
            QStringList answer2 = m_question.at(i+3).split(":");
            QStringList answer3 = m_question.at(i+4).split(":");
            QStringList good_answer = m_question.at(i+5).split(":");
            answer = good_answer.at(1);
            answer = answer.replace(" ", "");
            if(isMusicType){
                QStringList data = m_question.at(i+6).split(":");
                sendData(data.at(1).toLocal8Bit());
            }
            display_question(question_list.at(1), answer1.at(1), answer2.at(1), answer3.at(1));
        }
    }
    change_page();
}

void WindowQuestion::sendData(const QByteArray &data){
    m_serial->write(data);
    cout << "Envoi : " << data.toStdString() << endl;
}

void WindowQuestion::display_question(QString question, QString answer1, QString answer2, QString answer3){
    wq->label_question_ligne2->close();
    wq->label_question_ligne1->setText("Question " + QString::number(question_number) + " : " + question);
    wq->pushButton_answer1->setText(answer1);
    wq->pushButton_answer2->setText(answer2);
    wq->pushButton_answer3->setText(answer3);
}

QString WindowQuestion::int_to_str(int num){
    return QString::number(num);
}

void WindowQuestion::change_page(){
    wq->label_page->setText(int_to_str(question_number) + "/" + int_to_str(get_nb_question()));
    if(question_number == get_nb_question()+1){
        this->close();
        WindowEnd *endwindow = new WindowEnd(m_parent, m_serial, answer_player, int_to_str(get_nb_question()));
        endwindow->show();
    }
}

int WindowQuestion::get_nb_question(){
    int nb = 0;
    for(unsigned int i=0;i<m_question.size();i++)
        if(m_question.at(i).startsWith("QuestionStart"))
            nb++;
    return nb;
}

void WindowQuestion::event_button(){
    QPushButton *btnSender = qobject_cast<QPushButton*>(sender());
    QString clickedBtnName = btnSender->objectName();
    QStringList list_name = clickedBtnName.split("_");
    QString answerplayer = list_name.at(1);
    check_answer(answerplayer);
}

void WindowQuestion::check_answer(QString answerplayer){
    answerplayer = answerplayer.replace("answer", "");
    if(answerplayer.compare(answer) == 0){
        answer_player.push_back(true);
    }else{
        answer_player.push_back(false);
        m_error.push_back(error++);
    }
    if(m_error.size() == 3) {
        reset();
        change_page();
        display_message_error();
        read_one_question();
    }else
        question_number = question_number + 1;
    read_one_question();
}

void WindowQuestion::display_message_error(){
    msg_box.setText(m_message_error);
    msg_box.setObjectName(QStringLiteral("Information"));
    msg_box.exec();
}

void WindowQuestion::reset(){
    error = 0;
    question_number = 1;
    answer_player.clear();
    m_error.clear();
    m_message_error = "Vous vous êtes trompé 3 fois. Vous recommencer du début !";
}

void WindowQuestion::init_button_event(){
    connect(wq->pushButton_answer1, SIGNAL (released()), this, SLOT(event_button()));
    connect(wq->pushButton_answer2, SIGNAL (released()), this, SLOT(event_button()));
    connect(wq->pushButton_answer3, SIGNAL (released()), this, SLOT(event_button()));
}
