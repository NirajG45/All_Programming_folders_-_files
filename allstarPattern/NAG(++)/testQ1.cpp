// C++ Lab Assignment:- 1 Q.12 (Using Array of Objects)
#include<iostream>
using namespace std;

class Student {
	private:
		int rollno;
		float marks;
		string name;

	public:
		// Parameterized constructor
		Student(int R = 0, float M = 0.0, string N = "") {
			rollno = R;
			marks = M;
			name = N;
		}

		// Function to take input
		void input() {
			cout << "Enter Roll No: ";
			cin >> rollno;
			cout << "Enter Marks: ";
			cin >> marks;
			cout << "Enter Name: ";
			cin >> ws; // to clear newline before getline
			getline(cin, name);
		}

		// Display function
		void display() {
			cout << "Your Name: " << name << ", Roll No: " << rollno << ", Marks: " << marks << endl;
		}
};

int main() {
	const int size = 3;
	Student s[size];

	// Input for all students
	cout << "Enter details of " << size << " students:\n";
	for (int i = 0; i < size; i++) {
		cout << "\nStudent " << i + 1 << ":\n";
		s[i].input();
	}

	// Display all students
	cout << "\n--- Student Details ---\n";
	for (int i = 0; i < size; i++) {
		cout << "Student " << i + 1 << ": ";
		s[i].display();
	}

	return 0;
}

