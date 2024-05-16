#include "Menu.h"

void Menu::menu() {
    int choice;
    cout << "Welcome to Spanish Quiz!\n";
    cout << "Answer Questions In Spanish!\n";
    cout << "\n1. Beginner\n2. Intermediate\n3. Advanced\nEnter Choice: ";
    cin >> choice;

    while (choice < 1 || choice > 3) {
        cout << "Enter 1, 2, or 3: ";
        cin >> choice;
    }

    if (choice == 1) {
        Beginner q;
        q.questions();
    } else if (choice == 2) {
        Intermediate q;
        q.questions();
    } else if (choice == 3) {
        Advanced q;
        q.questions();
    }

}
