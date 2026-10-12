//read and display a character using union

#include <iostream>
using namespace std;

union Data {
    int i;
    float f;
    char ch;
};

int main() {
    Data d;

    cout << "Enter a character: ";
    cin >> d.ch;

    cout << "Character = " << d.ch;

    return 0;
}
