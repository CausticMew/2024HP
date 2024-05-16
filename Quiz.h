#ifndef QUIZ_H
#define QUIZ_H
#include "Question.h"
#include <fstream>

// Quiz class to manage the quiz
class Quiz {
private:
    vector<Question> questions;
    int score;

public:
    Quiz();
    void addQuestion(Question q);
    void startQuiz();
};

#endif
