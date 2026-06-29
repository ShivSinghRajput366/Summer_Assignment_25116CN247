#include <iostream>
#include <string>
using namespace std;

int roll[50], n;
string name[50];
float marks[50];

// Function to add student records
void addStudents() {
    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Student " << i + 1 << endl;

        cout << "Roll Number: ";
        cin >> roll[i];

        cout << "Name: ";
        cin >> name[i];

        cout << "Marks: ";
        cin >> marks[i];
    }
}

// Function to display student records
void displayStudents() {
    cout << "\n----- Student Records -----" << endl;
    cout << "Roll No\tName\tMarks" << endl;

    for (int i = 0; i < n; i++) {
        cout << roll[i] << "\t" << name[i] << "\t" << marks[i] << endl;
    }
}

int main() {
    int choice;

    do {
        cout << "\n===== Student Management System =====" << endl;
        cout << "1. Add Student Records" << endl;
        cout << "2. Display Student Records" << endl;
        cout << "3. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudents();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                cout << "Exiting Program..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while (choice != 3);

    return 0;
}