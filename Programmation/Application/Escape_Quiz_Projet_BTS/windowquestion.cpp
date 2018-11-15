#include "windowquestion.h"

#include "ui_windowquestion.h"

#include <QSerialPort>
#include <QSerialPortInfo>
#include <windowchoice.h>
#include <iostream>
#include <QFileDialog>
#include <QMessageBox>
#include <QFile>
#include <QStringList>
#include <QTextStream>
#include <string>

using namespace std;

WindowQuestion::WindowQuestion(QWidget *parent, QSerialPort *serial, QString type_button) :
    QWidget(parent),
    wq(new Ui::ApplicationQuestion)
{
    wq->setupUi(this);
    question_number = 1;
    m_serial = serial;
    m_type_question = type_button;
    cout << m_type_question.toStdString() << endl;
    open_file();
    //read_question();
    display_question();
    read_one_question();
}

WindowQuestion::~WindowQuestion()
{
    delete wq;
}

void WindowQuestion::open_file(){
    int etape = 1;
    QString nom_fichier = "mes_quizz/quizz_" + m_type_question + ".quizz";
    if(nom_fichier.isEmpty()) return;

    QFile file(nom_fichier);

    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(this, "Impossible d'ouvrir le fichier.", file.errorString());
    else{
        QTextStream flux(&file);
        QString ligne;
        while(!flux.atEnd()){
            ligne = flux.readLine();

            if(!ligne.startsWith("#"))
                question.push_back(ligne);
        }
    }
}

void WindowQuestion::display_question(){
    cout << question.size() << endl;
    for(int i=0;i<question.size();i++)
        cout << question.at(i).toStdString() << endl;
}

void WindowQuestion::read_one_question(){
    for(int i=0;i<question.size();i++){
        if(question.at(i).compare("QuestionStart_1") == 0){
            QStringList question_list = question.at(i+1).split(":");
            QStringList answer1 = question.at(i+2).split(":");
            QStringList answer2 = question.at(i+3).split(":");
            QStringList answer3 = question.at(i+4).split(":");
            wq->label_question->setText(question_list.at(1));
            wq->pushButton_answer1->setText(answer1.at(1));
            wq->pushButton_answer2->setText(answer2.at(1));
            wq->pushButton_answer3->setText(answer3.at(1));
        }
    }
}

