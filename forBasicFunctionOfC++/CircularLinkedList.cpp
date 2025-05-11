#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* last = NULL;

void insert(int value) {
    Node* temp = new Node();
    temp->data = value;

    if (last == NULL) {
        temp->next = temp;
        last = temp;
    } else {
        temp->next = last->next;
        last->next = temp;
        last = temp;
    }
}

void display() {
    if (last == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = last->next;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != last->next);
    cout << endl;
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    display();
    return 0;
}
