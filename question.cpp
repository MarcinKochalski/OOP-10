#include "question.h"

Question::Question(const std::string& questionText, const Date& answerDate) {
    this->questionText = questionText;
    this->answerDate = answerDate;
}

bool Question::isAnswerCorrect(const Date& userDate) const {
    return userDate.day == answerDate.day &&
           userDate.month == answerDate.month &&
           userDate.year == answerDate.year;
}