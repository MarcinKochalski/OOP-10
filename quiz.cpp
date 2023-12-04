#include "quiz.h"
#include <stdexcept>

Quiz::Quiz() {
    currentQuestionIndex = 0;
}

void Quiz::addQuestion(const Question& question) {
    questions.push_back(question);
}

bool Quiz::hasNextQuestion() const {
    return currentQuestionIndex < questions.size();
}

Question Quiz::getNextQuestion() {
    if (hasNextQuestion()) {
        return questions[currentQuestionIndex++];
    } else {
        throw std::runtime_error("No more questions in the quiz.");
    }
}