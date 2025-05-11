// this ia a simple fibonacci sequence program in c++.
#include <iostream>
using namespace std;

int main() {
    int n1 = 0, n2 = 1, n3, i, count = 10;

    cout << "Fibonacci Series: " << endl;
    
    for (i = 1; i <= count; ++i) {
        cout << n1 << " ";  // printing the series
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }

    return 0;
}