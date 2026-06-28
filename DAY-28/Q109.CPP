#include <iostream>
#include <string>
using namespace std;

class Library
{
    int bookId;
    string bookName;
    string author;
    bool issued;

public:
    void addBook()
    {
        cout << "Enter Book ID: ";
        cin >> bookId;
        cin.ignore();

        cout << "Enter Book Name: ";
        getline(cin, bookName);

        cout << "Enter Author Name: ";
        getline(cin, author);

        issued = false;
        cout << "\nBook Added Successfully!\n";
    }

    void displayBook()
    {
        cout << "\nBook ID     : " << bookId;
        cout << "\nBook Name   : " << bookName;
        cout << "\nAuthor Name : " << author;
        cout << "\nStatus      : ";

        if (issued)
            cout << "Issued";
        else
            cout << "Available";

        cout << endl;
    }

    void issueBook()
    {
        if (issued)
            cout << "Book is already issued.\n";
        else
        {
            issued = true;
            cout << "Book Issued Successfully!\n";
        }
    }

    void returnBook()
    {
        if (!issued)
            cout << "Book is already available.\n";
        else
        {
            issued = false;
            cout << "Book Returned Successfully!\n";
        }
    }
};

int main()
{
    Library book;
    int choice;

    do
    {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Book\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            book.addBook();
            break;

        case 2:
            book.displayBook();
            break;

        case 3:
            book.issueBook();
            break;

        case 4:
            book.returnBook();
            break;

        case 5:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}