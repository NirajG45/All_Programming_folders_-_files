// Sum of digits to the given Number in c++.
#include <iostream>
using namespace std;

int main() {
    int num, Real, sum = 0;
    
    cout << "Enter a number: ";
    cin >> num;

    Real = num;
    while (num > 0) {
        sum += num % 10;
        num = num / 10;
    }

    cout << "Sum of digits of " << Real << " is: " << sum;

    return 0;
}