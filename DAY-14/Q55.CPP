#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int largest = a[0];
    int second = a[0];
    // Find largest element
    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }
    }
    // Find second largest element
    for (int i = 0; i < n; i++) {
        if (a[i] > second && a[i] < largest) {
            second = a[i];
        }
    }
    cout << "Second largest element = " << second;
    return 0;
}