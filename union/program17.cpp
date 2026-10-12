//declare a union and display a value

#include <iostream>
using namespace std;

union Data {
    int i;
    float f;
    char ch;
};

int main() {
    Data d;

    d.i = 10;

    cout << "Integer value = " << d.i;

    return 0;
}
