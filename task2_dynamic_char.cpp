#include <iostream>
using namespace std;

int main() {
    char* charPtr = new char;
    *charPtr = 'G';

    cout << "Stored Character: " << *charPtr << endl;

    delete charPtr;
    charPtr = nullptr;

    return 0;
}
