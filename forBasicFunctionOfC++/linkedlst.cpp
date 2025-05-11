#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Traverse and display list
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    // Create nodes
    Node* head = new Node{10, NULL};
    Node* second = new Node{20, NULL};
    Node* third = new Node{30, NULL};
    Node* fourth = new Node{40, NULL};
    Node* fifth = new Node{50, NULL};
    Node* sixth = new Node{60, NULL};
    
    // Link nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;


    // Display
    display(head);

    return 0;
}
