#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string expr) {
    stack<char> st;
    for(char c : expr) {
        if(c == '(')
            st.push(c);
        else if(c == ')') {
            if(st.empty()) return false;
            st.pop();
        }
    }
    return st.empty();
}

int main() {
    string expr = "((()))";
    cout << (isBalanced(expr) ? "Balanced" : "Not Balanced") << endl;
    return 0;
}
