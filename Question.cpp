#include "Question.h"

Question::Question(string q, vector<string> opts, int correct)
    : text(q), options(opts), correctOption(correct) {}

string Question::getText() const {
    return text;
}

vector<string> Question::getOptions() const {
    return options;
}

int Question::getCorrectOption() const {
    return correctOption;
}
