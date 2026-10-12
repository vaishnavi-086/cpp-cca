// enum for a calculator

#include <iostream>
using namespace std;

enum Operation {ADD = 1, SUBTRACT, MULTIPLY};

int main() {
    int a, b, choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "1. Add\n2. Subtract\n3. Multiply\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
        case ADD:
            cout << "Result = " << a + b;
            break;
        case SUBTRACT:
            cout << "Result = " << a - b;
            break;
        case MULTIPLY:
            cout << "Result = " << a * b;
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}
