#ifndef QUESTION_H
#define QUESTION_H

#include <string>
#include "date.h"

class Question {
public:
    std::string questionText;
    Date answerDate;

    Question(const std::string& questionText, const Date& answerDate);
    bool isAnswerCorrect(const Date& userDate) const;
};

#endif