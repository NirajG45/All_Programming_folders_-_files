// assignment:- 1st Q15
#include<iostream>
using namespace std;

class Student {
	private:
		int rollno;
		string name;
		
	public:
		Student(int R, string N){
			rollno = R;
			name = N;
		}
//	this is a friend function
	friend void display(Student s);
};

// Friend function definition (outside the class)
	void display(Student s){
		cout << "Your Name is " << s.name << " and roll number " << s.rollno << endl;
	}
	
	int main(){
		Student s1(101, "Niraj");
		
		display(s1);
		
		return 0;
	}






