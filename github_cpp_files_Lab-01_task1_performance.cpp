#include <iostream>
using namespace std;

int main() {
    int marks[10];
    float sum = 0.0;
    int passed = 0, failed = 0;

    cout << "Enter marks for 10 students: \n";
    for (int i = 0; i < 10; i++) {
        cout << "Student " << i + 1 << " marks: ";
        cin >> marks[i];
        sum += marks[i];

        if (marks[i] >= 50)
            passed++;
        else
            failed++;
    }

    float highest = marks[0];
    float lowest = marks[0];

    for (int i = 1; i < 10; i++) {
        if (marks[i] > highest) highest = marks[i];
        if (marks[i] < lowest) lowest = marks[i];
    }

    cout << "\nMarks Overview" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Student " << i + 1 << ": " << marks[i] << endl;
    }

    cout << "\nClass Performance" << endl;
    cout << "Average Marks: " << sum / 10.0 << endl;
    cout << "Highest Marks: " << highest << endl;
    cout << "Lowest Marks: " << lowest << endl;
    cout << "Students Passed: " << passed << endl;
    cout << "Students Failed: " << failed << endl;

    return 0;
}
