#include <iostream>
using namespace std;

#define SIZE 6

class BankQueue {
    int arr[SIZE];
    int front, rear, count;
public:
    BankQueue() {
        front = 0;
        rear = -1;
        count = 0;
    }

    bool isFull() {
        return count == SIZE;
    }

    bool isEmpty() {
        return count == 0;
    }

    void issueToken(int token) {
        if (isFull()) {
            cout << "\n[Notice] Waiting room is full! Cannot issue more tokens right now.\n";
            return;
        }
        rear = (rear + 1) % SIZE;
        arr[rear] = token;
        count++;
        cout << "\n[Success] Token " << token << " issued successfully.\n";
    }

    void serveCustomer() {
        if (isEmpty()) {
            cout << "\n[Notice] Nobody is waiting! No customers to serve.\n";
            return;
        }
        cout << "\n[Service] Serving customer with token: " << arr[front] << "\n";
        front = (front + 1) % SIZE;
        count--;
    }

    void showWaiting() {
        if (isEmpty()) {
            cout << "\n[Notice] Nobody is currently waiting in the room.\n";
            return;
        }
        cout << "\n[Waiting Room] Current waiting tokens: ";
        int i = front;
        for (int c = 0; c < count; c++) {
            cout << arr[i] << " ";
            i = (i + 1) % SIZE;
        }
        cout << "\n";
    }
};

int main() {
    BankQueue q;
    int choice, tokenCounter = 1;
    do {
        cout << "\n--- Bank Token System Menu ---\n";
        cout << "1. Issue Token (Enqueue)\n";
        cout << "2. Serve Customer (Dequeue)\n";
        cout << "3. Show Waiting Customers\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                q.issueToken(tokenCounter++);
                break;
            case 2:
                q.serveCustomer();
                break;
            case 3:
                q.showWaiting();
                break;
            case 4:
                cout << "Exiting system. Have a nice day!\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
