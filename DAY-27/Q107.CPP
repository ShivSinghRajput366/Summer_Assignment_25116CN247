#include <iostream>
using namespace std;

struct Employee
{
    int id;
    char name[50];
    float basicSalary;
    float bonus;
    float totalSalary;
};

int main()
{
    Employee emp[100];
    int n = 0, choice, searchId, i;
    bool found;

    do
    {
        cout << "\n===== SALARY MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Employee Salary";
        cout << "\n2. Display All Salaries";
        cout << "\n3. Search Employee Salary";
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

                cout << "Enter Basic Salary: ";
                cin >> emp[n].basicSalary;

                cout << "Enter Bonus: ";
                cin >> emp[n].bonus;

                emp[n].totalSalary = emp[n].basicSalary + emp[n].bonus;

                n++;

                cout << "\nSalary Record Added Successfully!";
                break;

            case 2:
                if (n == 0)
                {
                    cout << "\nNo Salary Records Found!";
                }
                else
                {
                    cout << "\n----- Salary Records -----";

                    for (i = 0; i < n; i++)
                    {
                        cout << "\n\nEmployee ID : " << emp[i].id;
                        cout << "\nName         : " << emp[i].name;
                        cout << "\nBasic Salary : " << emp[i].basicSalary;
                        cout << "\nBonus        : " << emp[i].bonus;
                        cout << "\nTotal Salary : " << emp[i].totalSalary;
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
                        cout << "\nName         : " << emp[i].name;
                        cout << "\nBasic Salary : " << emp[i].basicSalary;
                        cout << "\nBonus        : " << emp[i].bonus;
                        cout << "\nTotal Salary : " << emp[i].totalSalary;

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