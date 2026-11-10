#include <iostream>
using namespace std;

class Stack {
private:
    static const int MAX = 5;
    int arr[MAX];
    int topIndex;

public:
    Stack() {
        topIndex = -1;
    }

    void push(int val) {
        if (topIndex >= MAX - 1) {
            cout << "Stack overflow\n";
            return;
        }
        arr[++topIndex] = val;
    }

    int pop() {
        if (topIndex < 0) {
            cout << "Stack underflow\n";
            return -1;
        }
        return arr[topIndex--];
    }

    int search(int x) {
        for (int i = topIndex; i >= 0; i--) {
            if (arr[i] == x) {
                return (topIndex - i + 1);
            }
        }
        return -1;
    }

    bool isEmpty() {
        return topIndex < 0;
    }
};

int main() {
    Stack s;
    int val;

    cout << "Enter 5 integers to push into the stack:\n";
    for (int i = 0; i < 5; i++) {
        cin >> val;
        s.push(val);
    }

    cout << "\nTrying to push a 6th element (60):\n";
    s.push(60);

    int searchPresent;
    cout << "\nEnter a value to search that is present in the stack: ";
    cin >> searchPresent;
    int pos1 = s.search(searchPresent);
    if (pos1 != -1)
        cout << "Value " << searchPresent << " found at position " << pos1 << " from the top.\n";
    else
        cout << "Value not found.\n";

    cout << "\nPopping all items from the stack:\n";
    while (!s.isEmpty()) {
        cout << "Popped: " << s.pop() << "\n";
    }

    cout << "\nTrying to pop from an empty stack:\n";
    s.pop();

    return 0;
}
