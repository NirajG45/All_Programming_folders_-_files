#include <iostream>
using namespace std;

void decimalToBinary(int num) {
    int binary[32];
    int i = 0;

    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    cout << "Binary number of given number: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }
    cout << endl;
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    if (decimal == 0) {
        cout << "Binary equivalent: 0" << endl;
    } else {
        decimalToBinary(decimal);
    }

    return 0;
}
