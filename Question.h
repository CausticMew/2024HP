#ifndef QUESTION_H
#define QUESTION_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Question class to represent each question
class Question {
private:
    string text;
    vector<string> options;
    int correctOption;

public:
    Question(string q, vector<string> opts, int correct);
    string getText() const;
    vector<string> getOptions() const;
    int getCorrectOption() const;
};

#endif
