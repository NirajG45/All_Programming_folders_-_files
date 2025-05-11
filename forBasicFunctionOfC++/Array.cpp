#include<iostream>
using namespace std;

// this is a program for adding all numbers by for using array in c++.
int main(){
    int New[5];
    int i, sum = 0;

    cout << "This is Addition of all numbers:" << endl;

    for (int i = 0; i < 5; i++) {
        cin >> New[i];
    }

    for (int i = 0; i < 5; i++) {
        sum += New[i];
    } 

    cout << "Sum of all numbers: " << sum << endl;

    return 0;
}