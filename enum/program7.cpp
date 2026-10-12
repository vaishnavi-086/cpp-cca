
// enum for weekdays
#include <iostream>
using namespace std;

enum Weekday {
    MON = 1, TUE, WED, THU, FRI, SAT, SUN
};

int main() {
    Weekday day = SAT;

    if (day == SAT || day == SUN)
        cout << "Weekend";
    else
        cout << "Weekday";

    return 0;
}
