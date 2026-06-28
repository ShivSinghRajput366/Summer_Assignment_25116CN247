#include <iostream>
#include <string>
using namespace std;

class Ticket
{
private:
    string name;
    int age;
    int seatNo;
    bool booked;

public:
    Ticket()
    {
        booked = false;
    }

    void bookTicket()
    {
        cin.ignore();

        cout << "Enter Passenger Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Seat Number: ";
        cin >> seatNo;

        booked = true;

        cout << "\nTicket Booked Successfully!\n";
    }

    void cancelTicket()
    {
        if (booked)
        {
            booked = false;
            cout << "Ticket Cancelled Successfully!\n";
        }
        else
        {
            cout << "No Ticket has been booked.\n";
        }
    }

    void displayTicket()
    {
        if (booked)
        {
            cout << "\n===== TICKET DETAILS =====\n";
            cout << "Passenger Name : " << name << endl;
            cout << "Age            : " << age << endl;
            cout << "Seat Number    : " << seatNo << endl;
            cout << "Status         : Booked" << endl;
        }
        else
        {
            cout << "No Ticket Booked.\n";
        }
    }
};

int main()
{
    Ticket t;
    int choice;

    do
    {
        cout << "\n===== TICKET BOOKING SYSTEM =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Cancel Ticket\n";
        cout << "3. Display Ticket\n";
        cout << "4. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            t.bookTicket();
            break;

        case 2:
            t.cancelTicket();
            break;

        case 3:
            t.displayTicket();
            break;

        case 4:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}