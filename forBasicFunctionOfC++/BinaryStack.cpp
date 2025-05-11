#include <iostream>
#include <stack>
using namespace std;

int main() {
    int num = 10;
    stack<int> st;

    while(num > 0) {
        st.push(num % 2);
        num /= 2;
    }

    cout << "Binary: ";
    while(!st.empty()) {
        cout << st.top();
        st.pop();
    }
    return 0;
}
