//Store and display student details

#include <iostream>
using namespace std;

struct Student {
    int rollno;
    char name[30];
    float marks;
};

int main() {
    Student s;

    cout << "Enter roll number: ";
    cin >> s.rollno;

    cout << "Enter name: ";
    cin >> s.name;

    cout << "Enter marks: ";
    cin >> s.marks;

    cout << "\nStudent Details\n";
    cout << "Roll Number: " << s.rollno << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;

    return 0;
}
