#include <iostream>
#include <string>
using namespace std;

class Contact
{
private:
    string name;
    string phone;
    string email;
    bool saved;

public:
    Contact()
    {
        saved = false;
    }

    void addContact()
    {
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Phone Number: ";
        getline(cin, phone);

        cout << "Enter Email: ";
        getline(cin, email);

        saved = true;

        cout << "\nContact Saved Successfully!\n";
    }

    void displayContact()
    {
        if (saved)
        {
            cout << "\n===== CONTACT DETAILS =====\n";
            cout << "Name         : " << name << endl;
            cout << "Phone Number : " << phone << endl;
            cout << "Email        : " << email << endl;
        }
        else
        {
            cout << "No Contact Found.\n";
        }
    }

    void updateContact()
    {
        if (saved)
        {
            cin.ignore();

            cout << "Enter New Name: ";
            getline(cin, name);

            cout << "Enter New Phone Number: ";
            getline(cin, phone);

            cout << "Enter New Email: ";
            getline(cin, email);

            cout << "Contact Updated Successfully!\n";
        }
        else
        {
            cout << "No Contact Found.\n";
        }
    }

    void deleteContact()
    {
        if (saved)
        {
            saved = false;
            cout << "Contact Deleted Successfully!\n";
        }
        else
        {
            cout << "No Contact Found.\n";
        }
    }
};

int main()
{
    Contact c;
    int choice;

    do
    {
        cout << "\n===== CONTACT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contact\n";
        cout << "3. Update Contact\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            c.addContact();
            break;

        case 2:
            c.displayContact();
            break;

        case 3:
            c.updateContact();
            break;

        case 4:
            c.deleteContact();
            break;

        case 5:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}