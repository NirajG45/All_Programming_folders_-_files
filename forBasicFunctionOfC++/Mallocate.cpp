#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;

public:
    BankAccount(int bal) { balance = bal; }  // Constructor

    void deposit(int amount) { balance += amount; }

    int getBalance() { return balance; } // Getter function
};

int main() {
    BankAccount myAcc(1000);  // Object
    myAcc.deposit(500);
    cout << "Balance: " << myAcc.getBalance() << endl;
    return 0;
}