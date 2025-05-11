// this is second string program to adding two string uisng #include<string>.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string firstN;
    string secondN;
    string finalN;

    cout << "Enter your first name: ";
    cin >> firstN;

    cout << "Enter your second name: ";
    cin >> secondN;

    finalN = firstN + " " + secondN;

    cout << "Your full name is: " << finalN << endl;
    
    return 0;
}