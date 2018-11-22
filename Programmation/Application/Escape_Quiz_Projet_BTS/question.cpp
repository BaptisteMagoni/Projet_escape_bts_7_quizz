#include "question.h"

using namespace std;

Question::Question()
{
    isUse = false;
}

Question::~Question()
{
    delete this;
}

void Question::setAnswer(vector<QString> answer){
    m_answer = answer;
}

void Question::setGoodAnswer(QString answer){
    good_answer = answer;
}

void Question::setQuestionName(QString name){
    question_name = name;
}

void Question::setUse(bool state){
    m_isUse = state;
}

vector<QString> Question::getAnswer() const{
    return m_answer;
}

QString Question::getGoodAnswer() const{
    return good_answer;
}

bool Question::isUse() const{
    return m_isUse;
}


