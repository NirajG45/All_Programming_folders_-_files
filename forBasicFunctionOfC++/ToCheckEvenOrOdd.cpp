// this program for checking the given number is even or odd in c++.
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " is even number." << endl;
    } else {
        cout << num << " is odd number." << endl;
    }
    return 0;
}
