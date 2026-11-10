#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void displayList(Node* head) {
    if (head == nullptr) {
        cout << "List is EMPTY.\n";
        return;
    }
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

int main() {
    Node* head = nullptr;

    cout << "Initial status: ";
    displayList(head);

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    cout << "Linked List after inserting 10, 20, 30 at end: ";
    displayList(head);

    return 0;
}
