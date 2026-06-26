#include <iostream>
using namespace std;

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    Employee emp[100];
    int n = 0, choice, searchId, i;
    bool found;

    do
    {
        cout << "\n===== EMPLOYEE MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Employee";
        cout << "\n2. Display All Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Exit";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "\nEnter Employee ID: ";
                cin >> emp[n].id;

                cout << "Enter Employee Name: ";
                cin >> emp[n].name;

                cout << "Enter Employee Salary: ";
                cin >> emp[n].salary;

                n++;

                cout << "\nEmployee Record Added Successfully!";
                break;

            case 2:
                if (n == 0)
                {
                    cout << "\nNo Employee Records Found!";
                }
                else
                {
                    cout << "\n----- Employee Records -----";

                    for (i = 0; i < n; i++)
                    {
                        cout << "\n\nEmployee ID : " << emp[i].id;
                        cout << "\nName        : " << emp[i].name;
                        cout << "\nSalary      : " << emp[i].salary;
                    }
                }
                break;

            case 3:
                cout << "\nEnter Employee ID to Search: ";
                cin >> searchId;

                found = false;

                for (i = 0; i < n; i++)
                {
                    if (emp[i].id == searchId)
                    {
                        cout << "\nEmployee Found!";
                        cout << "\nEmployee ID : " << emp[i].id;
                        cout << "\nName        : " << emp[i].name;
                        cout << "\nSalary      : " << emp[i].salary;

                        found = true;
                        break;
                    }
                }

                if (!found)
                {
                    cout << "\nEmployee Record Not Found!";
                }

                break;

            case 4:
                cout << "\nThank You!";
                break;

            default:
                cout << "\nInvalid Choice!";
        }

    } while (choice != 4);

    return 0;
}