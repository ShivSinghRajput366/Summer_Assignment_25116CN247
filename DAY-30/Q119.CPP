#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    int empID[50];
    string name[50];
    float salary[50];

    // Input employee details
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Employee " << i + 1 << endl;

        cout << "Employee ID: ";
        cin >> empID[i];

        cout << "Employee Name: ";
        cin >> name[i];

        cout << "Salary: ";
        cin >> salary[i];
    }

    // Display employee records
    cout << "\n----- Employee Records -----" << endl;
    cout << "ID\tName\tSalary" << endl;

    for (int i = 0; i < n; i++) {
        cout << empID[i] << "\t" << name[i] << "\t" << salary[i] << endl;
    }

    return 0;
}