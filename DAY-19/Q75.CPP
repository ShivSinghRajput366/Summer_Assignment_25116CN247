#include <iostream>
using namespace std;

int main() {
    int row, col;

    cout << "Enter number of rows and columns: ";
    cin >> row >> col;

    int A[row][col];

    cout << "\nEnter matrix elements:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> A[i][j];
        }
    }

    cout << "\nTranspose of Matrix:\n";
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            cout << A[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}