#include <iostream>
using namespace std;

#define n 100

class Stack {
    int* arr;
    int top;

public:
    Stack() {
        arr = new int[n];
        top = -1;
    }

    void push(int x) {
        if(top == n - 1) {
            cout << "Stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop() {
        if(top == -1) {
            cout << "No element to pop" << endl;
            return;
        }
        top--;
    }

    int Top() {
        if(top == -1) {
            cout << "No element in Stack" << endl;
            return -1;
        }
        return arr[top];
    }

    bool empty() {
        return top == -1;
    }

    void display() {
        if(top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack elements (Top to Bottom): ";
        for(int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout << "Top element: " << st.Top() << endl;

    st.display(); // prints all stack elements

    return 0;
}
