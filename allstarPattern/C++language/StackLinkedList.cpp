#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = NULL;

void push(int val) {
    Node* temp = new Node();
    temp->data = val;
    temp->next = top;
    top = temp;
}

void pop() {
    if (top == NULL)
        cout << "Stack Empty\n";
    else {
        Node* temp = top;
        top = top->next;
        delete temp;
    }
}

void display() {
    Node* temp = top;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    return 0;
}
