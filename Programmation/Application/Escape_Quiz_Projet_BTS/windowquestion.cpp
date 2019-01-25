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
#include <unistd.h>

using namespace std;

WindowQuestion::WindowQuestion(QWidget *parent, QSerialPort *serial, QString type_button, Client *client, bool demo) :
    QWidget(parent),
    wq(new Ui::ApplicationQuestion)
{
    wq->setupUi(this);
    m_parent = parent;
    question_number = 1;
    error = 0;
    m_serial = serial;
    m_type_question = type_button;
    if(m_type_question == "musical"){
        isMusicType = true;
        wq->widget_rejouer->show();
    }else{
        isMusicType = false;
        wq->widget_rejouer->hide();
    }
    if(!m_demo)
       isMusicType = false;
    m_list_button.push_back(wq->pushButton_answer1);
    m_list_button.push_back(wq->pushButton_answer2);
    m_list_button.push_back(wq->pushButton_answer3);
    m_list_button.push_back(wq->pushButton_rejouer);
    if(isMusicType)
        connect(m_serial, SIGNAL(readyRead()), this, SLOT(read_data()));
    init_button_event();
    open_file();
    change_question();
    read_one_question();
    m_client = client;;
    m_demo = demo;
}

WindowQuestion::~WindowQuestion()
{
    delete wq;
}

void WindowQuestion::init_button_event(){
    connect(wq->pushButton_answer1, SIGNAL (released()), this, SLOT(event_button()));
    connect(wq->pushButton_answer2, SIGNAL (released()), this, SLOT(event_button()));
    connect(wq->pushButton_answer3, SIGNAL (released()), this, SLOT(event_button()));
    connect(wq->pushButton_rejouer, SIGNAL (released()), this, SLOT(rejouer()));
}

void WindowQuestion::open_file(){
    QString nom_fichier = "";
    if(m_type_question.compare("aléatoire") != 0)
        nom_fichier = "mes_quizz/quizz_" + m_type_question + ".quizz";
    else{
        //A faire pas trouver la solution
    }
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

void WindowQuestion::rejouer(){
    for(unsigned int i=0;i<m_question.size();i++){
        if(m_question.at(i).compare("QuestionStart_"+int_to_str(question_number)) == 0){
            QStringList data = m_question.at(i+6).split(":");
            sendData(data.at(1).toLocal8Bit());
            set_state_button(false);
        }
    }
}

void WindowQuestion::read_one_question(){
    if(isMusicType)
        set_state_button(false);
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
    change_question();
}

void WindowQuestion::set_state_button(bool state){
    for(unsigned int i=0;i<m_list_button.size();i++){
        QPushButton *button = m_list_button.at(i);
        button->setEnabled(state);
        if(state)
            button->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:1 rgba(223, 67, 28, 228)); "
                                  "color: rgb(255, 255, 255); "
                                  "font: 12pt \"Comic Sans MS\";");
        else
            button->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:1 rgba(242, 113, 81, 228)); "
                                  "color: rgb(255, 255, 255); "
                                  "font: 12pt \"Comic Sans MS\";");
    }
}

void WindowQuestion::read_data(){
    QByteArray data = m_serial->readAll();
    cout << "Data recu : " << data.toStdString() << " Musique : " << isMusicType << endl;
    if(isMusicType){
        set_state_button(true);
    }

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

void WindowQuestion::change_question(){
    wq->label_page->setText(int_to_str(question_number) + "/" + int_to_str(get_nb_question()));
    if(question_number == get_nb_question()+1){
        this->close();
        WindowEnd *endwindow = new WindowEnd(m_parent, m_serial, m_answer_player, int_to_str(get_nb_question()), m_client, m_demo);
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
        m_answer_player.push_back(true);
    }else{
        m_answer_player.push_back(false);
        m_error.push_back(error++);
    }
    if(m_error.size() == 3) {
        reset();
        display_message_error();
    }else
        question_number += 1;
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
    m_answer_player.clear();
    m_error.clear();
    m_message_error = "Vous vous êtes trompé 3 fois. Vous recommencer du début !";
}
