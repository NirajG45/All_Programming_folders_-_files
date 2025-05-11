// finding the prime number in c++ programming...
// #include<iostream>
// using namespace std;

// int main() {
//     int n, i, count = 0;
//     cout << "Enter a number: ";
//     cin >> n;
    
//     for(i = 2; i <= n/2; i++) {
//         if(n % i == 0) {
//             count++;
//             break;
//         }
//     }
//     if (count == 0 && n != 1)
//         cout << n << " is a prime number.";
//     else
//         cout << n << " is not a prime number.";
//     return 0;
// }

#include<iostream>
using namespace std;

int main() {
    int n, i, count = 0;
    cout << "Enter a number: ";
    cin >> n;
    
    int flag = 1;
    for(i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        cout << n << " is a prime number.";
    else
        cout << n << " is not a prime number.";
    
    return 0;
}
