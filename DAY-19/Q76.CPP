#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter the order of the square matrix: ";
    cin >> n;

    int A[n][n];

    cout << "\nEnter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    // Find diagonal sum
    for (int i = 0; i < n; i++) {
        sum += A[i][i];
    }

    cout << "\nSum of main diagonal elements = " << sum;

    return 0;
}