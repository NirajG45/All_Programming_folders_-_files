// Print the multiplication of any numbers using for loop.
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
        cin >> num;

    for (int i = 1; i <= 10; i++) {
        cout << num << " * " << i << " = " << num * i << endl;
    }

    return 0;
}