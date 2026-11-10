#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    double basicSalary;
    double allowance;
};

int main() {
    Employee emp;

    cout << "Enter Employee ID: ";
    cin >> emp.id;
    cout << "Enter Employee Name: ";
    cin.ignore();
    getline(cin, emp.name);
    cout << "Enter Basic Salary: ";
    cin >> emp.basicSalary;
    cout << "Enter Allowance: ";
    cin >> emp.allowance;

    double grossSalary = emp.basicSalary + emp.allowance;
    double taxPercent = (grossSalary > 100000) ? 0.05 : 0.02;
    double taxAmount = grossSalary * taxPercent;
    double finalSalary = grossSalary - taxAmount;

    cout << "\nEmployee Salary Details" << endl;
    cout << "ID: " << emp.id << endl;
    cout << "Name: " << emp.name << endl;
    cout << "Basic Salary: Rs. " << emp.basicSalary << endl;
    cout << "Allowance: Rs. " << emp.allowance << endl;
    cout << "Gross Salary: Rs. " << grossSalary << endl;
    cout << "Deducted Tax (" << (taxPercent * 100) << "%): Rs. " << taxAmount << endl;
    cout << "Final Salary (Net): Rs. " << finalSalary << endl;

    return 0;
}
