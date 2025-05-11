#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void enqueue(int value) {
    Node* temp = new Node();
    temp->data = value;

    if (front == NULL) {
        front = rear = temp;
        rear->next = front;
    } else {
        rear->next = temp;
        rear = temp;
        rear->next = front;
    }
}

void dequeue() {
    if (front == NULL) {
        cout << "Queue is empty\n";
        return;
    }

    if (front == rear) {
        delete front;
        front = rear = NULL;
    } else {
        Node* temp = front;
        front = front->next;
        rear->next = front;
        delete temp;
    }
}

void display() {
    if (front == NULL) {
        cout << "Queue is empty\n";
        return;
    }

    Node* temp = front;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != front);
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    return 0;
}
