#include <iostream>
using namespace std;

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    Student s[100];
    int n = 0, choice, searchRoll, i;
    bool found;

    do
    {
        cout << "\n===== STUDENT RECORD MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display All Students";
        cout << "\n3. Search Student";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "\nEnter Roll Number: ";
                cin >> s[n].roll;

                cout << "Enter Name: ";
                cin >> s[n].name;

                cout << "Enter Marks: ";
                cin >> s[n].marks;

                n++;
                cout << "Student Record Added Successfully!\n";
                break;

            case 2:
                if (n == 0)
                {
                    cout << "\nNo Records Found!\n";
                }
                else
                {
                    cout << "\n----- Student Records -----\n";

                    for (i = 0; i < n; i++)
                    {
                        cout << "\nRoll Number : " << s[i].roll;
                        cout << "\nName        : " << s[i].name;
                        cout << "\nMarks       : " << s[i].marks;
                        cout << "\n---------------------------";
                    }
                }
                break;

            case 3:
                cout << "\nEnter Roll Number to Search: ";
                cin >> searchRoll;

                found = false;

                for (i = 0; i < n; i++)
                {
                    if (s[i].roll == searchRoll)
                    {
                        cout << "\nStudent Found!";
                        cout << "\nRoll Number : " << s[i].roll;
                        cout << "\nName        : " << s[i].name;
                        cout << "\nMarks       : " << s[i].marks;

                        found = true;
                        break;
                    }
                }

                if (!found)
                {
                    cout << "\nStudent Record Not Found!";
                }

                break;

            case 4:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!";
        }

    } while (choice != 4);

    return 0;
}