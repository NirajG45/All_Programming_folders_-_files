#include <iostream>
#include <string>
using namespace std;

// Function overloading for addition
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

// Function overloading for multiplication
int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

// Function overloading for string concatenation
string add(string a, string b) {
    return a + b;
}

int main() {
    // Integer addition
    int x = 5, y = 10;
    cout << "Integer Addition: " << add(x, y) << endl;

    // Double addition
    double p = 3.5, q = 2.7;
    cout << "Double Addition: " << add(p, q) << endl;

    // Integer multiplication
    cout << "Integer Multiplication: " << multiply(x, y) << endl;

    // Double multiplication
    cout << "Double Multiplication: " << multiply(p, q) << endl;

    // String concatenation
    string str1 = "Hello, ", str2 = "World!";
    cout << "String Concatenation: " << add(str1, str2) << endl;

    return 0;
}