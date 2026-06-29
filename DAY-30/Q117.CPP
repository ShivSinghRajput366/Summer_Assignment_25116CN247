#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    int roll[50];
    string name[50];
    float marks[50];

    // Input student records
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Student " << i + 1 << endl;

        cout << "Roll Number: ";
        cin >> roll[i];

        cout << "Name: ";
        cin >> name[i];

        cout << "Marks: ";
        cin >> marks[i];
    }

    // Display student records
    cout << "\n----- Student Records -----" << endl;
    cout << "Roll No\tName\tMarks" << endl;

    for (int i = 0; i < n; i++) {
        cout << roll[i] << "\t" << name[i] << "\t" << marks[i] << endl;
    }

    return 0;
}