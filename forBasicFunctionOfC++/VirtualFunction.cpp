#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() { cout << "Base Class" << endl; } // Virtual Function
};

class Derived : public Base {
public:
    void show() override { cout << "45_Niraj" << endl; }
};

int main() {
    Base* b;
    Derived d;
    b = &d;
    b->show();  // Calls Derived class function (Runtime Polymorphism)
    return 0;
}