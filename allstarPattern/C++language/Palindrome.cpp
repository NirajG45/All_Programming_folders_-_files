// Checking the given number is palindrome or not in c++.
#include<iostream>
using namespace std;

int main(){
    int n, rel, rem, rev=0;
    cout << "Enter a Number: ";
    cin >> n;

    rel = n;
    while(n > 0){
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if(rel == rev){
        cout << rel << " is a palindrome number.";
    }else{
        cout << rel << " is not a palindrome number.";
    }

    return 0;
}