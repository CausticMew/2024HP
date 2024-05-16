#ifndef MENU_H
#define MENU_H
#include "Quiz.h"
#include "Question.h"
#include "Beginner.h"
#include "Intermediate.h"
#include "Advanced.h"


class Menu {
private:
    Quiz quiz;

public:
    void menu();
};

#endif
