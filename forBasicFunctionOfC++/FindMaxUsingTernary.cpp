// This is a simple program for finding the maximum number using ternary operator in C++.
#include <iostream>
using namespace std;

int main() {
    int a, b, c, max; // Declaring variables
    cout << "Enter the first number: "; // Prompting user to enter the first number
    cin >> a; // Reading the first number from the user

    cout << "Enter the second number: "; // Prompting user to enter the second number
    cin >> b; // Reading the second number from the user
    
    cout << "Enter the third number: "; // Prompting user to enter the third number
    cin >> c; // Reading the third number from the user

    (a > b && a > c) ? max = a : (b > a && b > c) ? max = b : max = c; // Using ternary operator to find the maximum number

    cout << "The maximum number is: " << max; // Printing the maximum number

    return 0;
}