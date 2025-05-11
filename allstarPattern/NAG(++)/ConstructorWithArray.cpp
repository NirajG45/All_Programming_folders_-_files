#include<iostream>
using namespace std;

class Student {
	private:
		int rollno;
		float marks;
		string name;

	public:
		// Parameterized constructor (also acts as default)
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
			cin >> ws; // clear newline
			getline(cin, name);
		}

		// Display function
		void display() {
			cout << "Your Name: " << name << ", Roll No: " << rollno << ", Marks: " << marks << endl;
		}

		// Destructor
		~Student() {
			cout << "Destructor called for " << name << endl;
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

	// Destructor will be called automatically here for each object
	return 0;
}

