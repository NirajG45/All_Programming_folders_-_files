// this is a simple program for copy constructor in c++.
#include <iostream>
using namespace std;

class Student{
    private:
        string Name;
        int rollNo;
        float marks;

    public:
        Student(string N, int R, float M) {
            Name = N;
            rollNo = R;
            marks = M;
            cout<< "Constructor is called"<<endl;
        }
        void showdetails(){
            cout << "Name: " << Name << endl;
            cout << "Roll No: " << rollNo << endl;
            cout << "Marks: " << marks << endl;
        }

        Student(Student &s){
            cout<<"Copy constructor is called"<<endl;
            Name = s.Name;
            rollNo = s.rollNo;
            marks = s.marks;
        }
        void CopyConstructordetails(){
            cout << "Name: " << Name << endl;
            cout << "Roll No: " << rollNo << endl;
            cout << "Marks: " << marks << endl;
        }
};

int main(){
    Student s1("A", 1, 99.99);
    s1.showdetails();

    Student s2(s1);
    s2.CopyConstructordetails();
    
    return 0;
}