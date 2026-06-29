#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cout << "Enter number of books: ";
    cin >> n;

    int bookID[50];
    string title[50];
    string author[50];

    // Input book details
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Book " << i + 1 << endl;

        cout << "Book ID: ";
        cin >> bookID[i];

        cout << "Book Title: ";
        cin >> title[i];

        cout << "Author Name: ";
        cin >> author[i];
    }

    // Display library records
    cout << "\n----- Library Records -----" << endl;
    cout << "Book ID\tTitle\t\tAuthor" << endl;

    for (int i = 0; i < n; i++) {
        cout << bookID[i] << "\t" << title[i] << "\t\t" << author[i] << endl;
    }

    return 0;
}