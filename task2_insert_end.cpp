#include <iostream>
using namespace std;

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;
    int value = 60;

    arr[n] = value;
    n++;

    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
