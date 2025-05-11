// This is a c++ program for conveting decimal numbers to binary.
#include<iostream>
using namespace std;

int main()
{
    int i=0, j, num, binary[32];
    
    cout << "enter first number: " << endl;
    cin >> num;

    cout << "Binary of " << num << " is: ";
    // for(i = 0; num > 0; i++){
    //     j = num % 2;
    //     cout << j;
    //     num = num / 2;
    // } 

    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    // cout << "Binary number of given number: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }
    cout << endl;

    return 0;
}