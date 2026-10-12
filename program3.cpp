
#include <iostream>
using namespace std;

int main()
{
    int a[5], i, largest;

    cout << "Enter 5 elements: ";
    for (i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    largest = a[0];

    for (i = 1; i < 5; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }

    cout << "Largest element = " << largest;

    return 0;
}
