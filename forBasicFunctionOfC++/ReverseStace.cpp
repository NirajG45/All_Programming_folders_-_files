#include <iostream>
    #include <stack>
    using namespace std;
    
    int main() {
        string str = "Niraj45";
        stack<char> st;
    
        for(char c : str)
            st.push(c);
    
        cout << "Reversed string: ";
        while(!st.empty()) {
            cout << st.top();
            st.pop();
        }
        return 0;
    }
    