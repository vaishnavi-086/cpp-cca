//Store and display a float using a union

#include <iostream>
using namespace std;

union Data {
    int i;
    float f;
    char ch;
};

int main() {
    Data d;

    d.f = 25.5;

    cout << "Float value = " << d.f;

    return 0;
}
