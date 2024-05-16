#include "Quiz.h"

Quiz::Quiz() : score(0) {}

void Quiz::addQuestion(Question q) {
    questions.push_back(q);
}

void Quiz::startQuiz() {
    int highscore;

    fstream file;
    file.open( "highscore.txt", ios::in | ios::out | ios::app);
    file >> highscore;
    file.close();

    for (size_t i = 0; i < questions.size(); ++i) {
        cout << "\nQuestion " << i + 1 << ": " << questions[i].getText() << endl;

        vector<string> options = questions[i].getOptions();
        for (size_t j = 0; j < options.size(); ++j) {
            cout << j + 1 << ". " << options[j] << endl;
        }

        int userChoice;
        cout << "Your answer: ";
        cin >> userChoice;

        while (userChoice < 1 || userChoice > 4) {
            cout << "Enter 1, 2, 3, or 4: ";
            cin >> userChoice;
        }

        if (userChoice == questions[i].getCorrectOption()) {
            cout << "Correct!\n";
            score++;
        } else {
            cout << "Incorrect! The answer is " << questions[i].getCorrectOption() << "\n";
        }
    }

    cout << "Quiz completed. Your score: " << score << "/" << questions.size() << endl;

    if(score > highscore) {
        highscore = score;
    }

    file.open("highscore.txt", ios::out | ios::trunc);
    file << highscore << endl;
    cout << "High-Score: " << highscore << '\n';

    file.close();
}
