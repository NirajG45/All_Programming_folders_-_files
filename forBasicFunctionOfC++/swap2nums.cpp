// swap two numbers without using third variable...
#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    cout << "enter first number: ";
    cin >> num1;

    cout << "enter first number: ";
    cin >> num2;

    cout << "You given two numbers are: " << num1 << " & " << num2 << endl;

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    cout << "Swaped numbers are: " << num1 << " & " << num2;

    return 0;
}