// Find the GCD (HCF) of two numbers by using loop in C++ Programming...
#include <iostream>
using namespace std;

int main() {
    int n1, n2, con, cy1, cy2, hcf = 1;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;

    cy1 = n1;
    cy2 = n2;

    while(n2 != 0){
        con = n2;
        n2 = n1 % n2;
        n1 = con;
    }
    hcf = n1;
    cout << "HCF of " << cy1 << " & " << cy2 << " is: " << hcf << endl;

    return 0;
    }