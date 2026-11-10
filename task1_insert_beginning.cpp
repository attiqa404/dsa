#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void displayList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;
    int n, value;

    cout << "How many initial values do you want to enter? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> value;
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    cout << "Initial Linked List: ";
    displayList(head);

    cout << "\nEnter a new value to insert at the BEGINNING: ";
    cin >> value;
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;

    cout << "Updated Linked List: ";
    displayList(head);

    return 0;
}
