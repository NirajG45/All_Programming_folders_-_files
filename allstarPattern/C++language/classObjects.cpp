#include<iostream>
#include<string>
using namespace std;

class Teacher{
    // propertises//attributes
    
public:
    string name;
    string dept;
    string sub;
    double salary;

    // methods//functions
    void changedept(string N, string ND, string S, double sy){
        name = N;
        dept = ND;
        sub = S;
        salary = sy;
    }

    void showdata(){
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "Subjects: " << sub << endl;
        cout << "Salary: " << salary << endl;   
    }

};

    int main(){
        Teacher t1, t2, t3; 
        t1.name = "Niraj";
        t1.dept = "BCA";
        t1.salary = 900000;
        t1.sub = "Machine Learning";

        t2.name = "Nisha";
        t2.dept = "MDS";
        t2.salary = 900000;
        t2.sub = "Healthy Teeth";

        t3.changedept("Niraj", "BCA", "AI", 4500000);

        t1.showdata();
        t2.showdata();
        t3.showdata();

        return 0;
    }

