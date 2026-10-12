//display value and adress using a pointer

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p;

    p = &a;

    cout << "Value of a = " << a << endl;
    cout << "Address of a = " << &a << endl;
    cout << "Value using pointer = " << *p << endl;
    cout << "Address stored in pointer = " << p << endl;

    return 0;
}
