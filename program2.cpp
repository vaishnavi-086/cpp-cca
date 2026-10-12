//Find the Sum and Average of Array Elements

#include <iostream>
using namespace std;

int main()
{
    int a[5], i, sum = 0;
    float avg;

    cout << "Enter 5 elements: ";
    for (i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }

    avg = sum / 5.0;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg;

    return 0;
}
