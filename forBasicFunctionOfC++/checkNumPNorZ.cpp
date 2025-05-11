// Checking a Number to given by the user is positive, Negative, or Zero...
#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter any a number: ";
    cin >> num;

    if(num > 0){
        cout << num << " is Positive Number." << endl;
        }
        else if(num < 0){
            cout << num << " is negative Number." << endl; 
        }
        else{
            cout << num << " is Zero." << endl;
        }

    return 0;
}