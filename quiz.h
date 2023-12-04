#ifndef QUIZ_H
#define QUIZ_H

#include <vector>
#include "question.h"

class Quiz {
private:
    std::vector<Question> questions;
    int currentQuestionIndex;

public:
    Quiz();
    void addQuestion(const Question& question);
    bool hasNextQuestion() const;
    Question getNextQuestion();
};

#endif