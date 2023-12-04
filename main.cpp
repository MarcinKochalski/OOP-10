#include <iostream>
#include "date.h"
#include "question.h"
#include "quiz.h"

using namespace std;

int main() {
    Quiz quiz;
    Date answer1(1, 8, 1944);
    Question question1("Powstanie warszawskie", answer1);

    Date answer2(15, 7, 1410);
    Question question2("Bitwa pod grunwaldem", answer2);

    Date answer3(10, 12, 1904);
    Question question3("1 nobel Sklodowskiej", answer3);

    quiz.addQuestion(question1);
    quiz.addQuestion(question2);
    quiz.addQuestion(question3);

    while (quiz.hasNextQuestion()) {
        Question currentQuestion = quiz.getNextQuestion();

        cout << "Question: " << currentQuestion.questionText << endl;

        bool validDate = false;
        while (!validDate) {
            int day, month, year;
            cout << "Enter day: ";
            cin >> day;
            cout << "Enter month: ";
            cin >> month;
            cout << "Enter year: ";
            cin >> year;
            cout << endl;

            Date userDate(day, month, year);
            validDate = currentQuestion.isAnswerCorrect(userDate);

            if (validDate)
                cout << "Correct!" << endl;
            else
                cout << "Wrong!" << endl;
        }
    }

    return 0;
}