#include <iostream>
#include <string>
using namespace std;

struct Product {
    string name;
    string code;
    double price;
};

int main() {
    int n;
    cout << "Enter the number of products: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of products." << endl;
        return 1;
    }

    Product* products = new Product[n];

    for (int i = 0; i < n; i++) {
        cout << "\nProduct " << i + 1 << endl;
        cin.ignore();
        cout << "Name: ";
        getline(cin, products[i].name);
        cout << "Code: ";
        cin >> products[i].code;
        cout << "Price: $";
        cin >> products[i].price;
    }

    cout << "\n--- PRODUCT LIST ---" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Product " << i + 1 << ": " << products[i].name 
             << " | Code: " << products[i].code 
             << " | Price: $" << products[i].price << endl;
    }

    delete[] products;
    return 0;
}
