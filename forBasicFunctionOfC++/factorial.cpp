// Finding the factorial of number to given by the user in c++ Programming...
#include<iostream>
using namespace std;

int main(){
    int num, i, fact = 1;

    cout << "Enter a Number for Finding the Factorial: ";
    cin >> num;

    for(i=1; i<=num; i++){
        fact = fact * i;
    }
    
    cout << "This factorial of " << num << " is " << fact << endl;

    return 0;

}
