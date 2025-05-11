// assignment:- 1st Q13
#include<iostream>
using namespace std;

class Student {
	private:
		int rollno;
	    float marks;
    
	public:
	// Input function
    void input() {
        cout << "Enter rollno: ";
        cin >> rollno;
        
        cout << "Enter marks: ";
        cin >> marks;
    }
    
//    display function
	void display(){
		cout << "Your rollno: " << rollno << "and Your marks: " << marks << endl;
	}
	
    void compare(Student s) {
        if (marks > s.marks) {
            cout << "First student has more marks.\n";
        } else if (marks < s.marks) {
            cout << "Second student has more marks.\n";
        } else {
            cout << "Both students have same marks.\n";
        }
    }
};

int main() {
    Student s1, s2;

    cout << "Enter marks of first student:\n";
    s1.input();

    cout << "Enter marks of second student:\n";
    s2.input();

    // Pass s2 as object to s1's function
    s1.compare(s2);

    return 0;
}

