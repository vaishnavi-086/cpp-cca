//union to store a student information

#include <iostream>
using namespace std;

union StudentData {
    int rollno;
    float marks;
};

int main() {
    StudentData s;

    cout << "Enter roll number: ";
    cin >> s.rollno;
    cout << "Roll number = " << s.rollno << endl;

    cout << "Enter marks: ";
    cin >> s.marks;
    cout << "Marks = " << s.marks;

    return 0;
}
