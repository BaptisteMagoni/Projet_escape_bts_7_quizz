#ifndef QUESTION_H
#define QUESTION_H

#include <iostream>
#include <QString>
#include <vector>

using namespace std;

class Question
{
public:
    Question();
    ~Question();
    void setUse(bool state);
    void setQuestionName(QString name);
    void setAnswer(vector<QString> answer);
    void setGoodAnswer(QString answer);
    bool isUse() const;
    QString getGoodAnswer() const;
    QString getQuestionName() const;
    vector<QString> getAnswer() const;

private:
    bool m_isUse;
    QString question_name;
    vector<QString> m_answer;
    QString good_answer;
};

#endif // QUESTION_H
