#include<iostream>
using namespace std;

void swappingByValue(int &a, int &b) {
    int value = a;
    a = b;
    b = value;
}

void swappingByReference(int &a, int &b) {
    int refer = a;
    a = b;
    b = refer;
}

void swappingByPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Before swapping: " << a << " " << b << endl;
    swappingByValue(a, b);
    cout << "After swapping by value: " << a << " " << b << endl;
    swappingByReference(a, b);
    cout << "After swapping by reference: " << a << " " << b << endl;
    swappingByPointer(&a, &b);
    cout << "After swapping by pointer: " << a << " " << b << endl;

    return 0;
}