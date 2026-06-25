#include <iostream>
using namespace std;

int main()
{
    int pin = 1234, enteredPin;
    int balance = 10000;
    int choice, amount;

    cout << "===== ATM SIMULATOR =====" << endl;

    cout << "Enter PIN: ";
    cin >> enteredPin;

    if (enteredPin == pin)
    {
        cout << "\n1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Your Balance is: Rs. " << balance << endl;
        }
        else if (choice == 2)
        {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            balance = balance + amount;
            cout << "Deposit Successful!" << endl;
            cout << "Updated Balance: Rs. " << balance << endl;
        }
        else if (choice == 3)
        {
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if (amount <= balance)
            {
                balance = balance - amount;
                cout << "Withdrawal Successful!" << endl;
                cout << "Remaining Balance: Rs. " << balance << endl;
            }
            else
            {
                cout << "Insufficient Balance!" << endl;
            }
        }
        else
        {
            cout << "Invalid Choice!" << endl;
        }
    }
    else
    {
        cout << "Incorrect PIN! Access Denied." << endl;
    }

    return 0;
}