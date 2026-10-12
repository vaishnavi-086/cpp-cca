//Enum with user input

#include <iostream>
using namespace std;

enum Color {RED = 1, GREEN, BLUE};

int main() {
    int choice;

    cout << "Enter color (1-3): ";
    cin >> choice;

    Color c = static_cast<Color>(choice);

    switch (c) {
        case RED:
            cout << "Red";
            break;
        case GREEN:
            cout << "Green";
            break;
        case BLUE:
            cout << "Blue";
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}
