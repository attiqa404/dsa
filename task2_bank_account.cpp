#include <iostream>
using namespace std;

void deposit(double* balance, double amount) {
    *balance += amount;
}

bool withdraw(double* balance, double amount) {
    if (amount > *balance) {
        return false;
    }
    *balance -= amount;
    return true;
}

int main() {
    double balance, depositAmt, withdrawAmt;
    double* balancePtr = &balance;

    cout << "Enter initial balance: ";
    cin >> *balancePtr;

    cout << "Enter deposit amount: ";
    cin >> depositAmt;
    deposit(balancePtr, depositAmt);
    cout << "Balance after deposit: " << *balancePtr << endl;

    cout << "Enter withdrawal amount: ";
    cin >> withdrawAmt;

    if (withdraw(balancePtr, withdrawAmt)) {
        cout << "Balance after withdrawal: " << *balancePtr << endl;
    } else {
        cout << "Error: Insufficient balance! Transaction cancelled." << endl;
    }

    return 0;
}
