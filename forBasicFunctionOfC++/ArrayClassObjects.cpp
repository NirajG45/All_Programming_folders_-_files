#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNo;
    char grade;
};

int main() {
    Student s[3]; // 3 students ka array

    // Student details input
    for (int i = 0; i < 3; i++) {
        cout << "Enter name, roll no, and grade of student " << i + 1 << ": ";
        cin >> s[i].name >> s[i].rollNo >> s[i].grade;
    }

    // Student details display
    cout << "\nStudent Details:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Name: " << s[i].name << ", Roll No: " << s[i].rollNo << ", Grade: " << s[i].grade << endl;
    }

    return 0;
}
