// Reversing the number to given by the user in c++ Programming...
#include<iostream>
using namespace std;

int main(){
    int n, rev = 0, rem;
    cout << "Enter a Number which you want to Reverse: "<< endl;
    cin >> n;

    // this method is reversing the numbers...
    while(n >0){
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    cout << "Before reverse the original Number is: " << n << endl;
    cout << "Reversed Number is: " << rev << endl;

    return 0;
}