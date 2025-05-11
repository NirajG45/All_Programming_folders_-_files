// Calculating sum of all Prime numbers to given by the user in C++ Programming...
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int rng, i, j, sum = 0;
    cout << "Enter the Range for calculating Sum of all prime numbers: ";
    cin >> rng;

    for(i=2; i<=rng; i++){
        int flag = 0;

        for(j=2; j<= sqrt(i); j++){
            if(i % j == 0){
                flag++;
                break;
            }
        }if(flag == 0){
        sum += i;
    }
   }
   cout << "Sum of prime numbers: " << sum << endl;

    return 0;
}