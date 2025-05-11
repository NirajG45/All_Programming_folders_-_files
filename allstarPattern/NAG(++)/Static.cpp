// assignment:- 1st Q14
#include<iostream>
using namespace std;

class Student {
	private:
		int rollno;
		string name;
		static int count;
		
	public:
		Student(int R, string N){
			rollno = R;
			name = N;
			count++;
		}
	
	void display(){
		cout << "Your Name is " << name << " and roll number " << rollno << endl;
	}
	
	static void Counting(){
		cout << "Total number of students are " << count << endl;
	}
};

	int Student :: count = 0;
	
	int main(){
		Student s1(101, "Niraj");
		Student s2(5, "Subh");
		
		s1.display();
		s2.display();
		
		Student::Counting();
		
		return 0;
	}






