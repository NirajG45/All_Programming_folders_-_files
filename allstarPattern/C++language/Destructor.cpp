#include<iostream>
using namespace std;

class Student {
    string Name;
    int rollNo;
    float marks;

    public:
        Student(string N, int R, float M) {
            Name = N;
            rollNo = R;
            marks = M;
        }

        void showdetails() {
            cout << "Name: " << Name << endl;
            cout << "Roll No: " << rollNo << endl;
            cout << "Marks: " << marks << endl;
        }

        ~Student() {
            cout << "Destructor called." << endl;
            cout<< "Memory of " << Name << " is freed." << endl;
        }
};

int main(){
    Student s1("A", 1, 99.99);
    s1.showdetails();

    return 0;
}