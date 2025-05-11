#include <iostream>
#include<string>
using namespace std;

class Friends{
    string Name;
    int Age;
    float marks;

    public:
    Friends() {
        Name = "Unknown";
        Age = 0;
        marks = 0.0;
    }
  
    Friends(string N, int A, float M){
        Name = N;
        Age = A;
        marks = M;
    }

    void input_data(){
        cout<<"Enter your Detalis: 1. Name: 2. Age: 3. Marks:\n";
        cin>>Name>>Age>>marks;
    }

    void showdetails(){
        cout<<"Your Name is: "<<Name<<endl;
        cout<<"Your Age is: "<<Age<<endl;
        cout<<"Your Marks is: "<<marks<<endl;
    }
};

int main(){
    Friends f1;

    f1.input_data();
    f1.showdetails();    
}