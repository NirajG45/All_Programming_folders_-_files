// This is a program for adding two strings using different operators in C++
#include <iostream>
#include <cstring>  // For strcat(), strcpy()
#include <sstream>  // For stringstream
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
    string firstNme, lastNme, fullName;

    char fName[20] = "Welcome to ";
    char lstName[20] = "C++ programming";

    string Pro = "Make your Career, ", gram = "Make your Life!";
    stringstream ss;

    cout << "Enter first name: ";
    cin >> firstNme;

    cout << "Enter last name: ";
    cin >> lastNme;

    // Adding both strings using + operator...
    fullName = firstNme + " " + lastNme;  // Space added between names

    // Adding both strings using append operator...
    string appendedName = firstNme;
    appendedName.append(" " + lastNme);

    // Adding both strings using strcat operator...
    char fullNamee[50];  // Sufficient size to hold both strings
    strcpy(fullNamee, fName);  // Copy fName into fullNamee
    strcat(fullNamee, lstName);  // Concatenate lstName to fullNamee

    // Adding both strings using stringstream operator...
    ss << Pro << gram;
    string result = ss.str();

    cout << "Full name using + operator: " << fullName << endl;
    cout << "append: " << appendedName << endl;
    cout << "strcat: " << fullNamee << endl;
    cout << "stringstream: " << result << endl;

    return 0;
}

