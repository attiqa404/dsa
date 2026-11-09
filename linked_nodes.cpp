#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

int main() {
    Node* node1 = new Node();
    Node* node2 = new Node();
    Node* node3 = new Node();

    node1->data = 10;
    node2->data = 20;
    node3->data = 30;

    node1->next = node2;
    node2->next = node3;
    node3->next = nullptr;

    Node* temp = node1;

    cout << "Linked list values: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    delete node1;
    delete node2;
    delete node3;

    return 0;
}
