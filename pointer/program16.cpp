//access array elements using a pointer

#include <iostream>
using namespace std;

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int *p = a;

    cout << "Array elements are: " << endl;

    for (int i = 0; i < 5; i++) {
        cout << *(p + i) << " ";
    }

    return 0;
}
