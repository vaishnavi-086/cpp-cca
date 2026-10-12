//Declare and display enum values

#include <iostream>
using namespace std;

enum Day {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY};

int main() {
    Day d = WEDNESDAY;

    cout << "Day value: " << d;

    return 0;
}
