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
    cout << "Duplicate elements are: ";
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }
        if (count > 0) {
            cout << a[i] << " ";
        }
    }
    return 0;
}