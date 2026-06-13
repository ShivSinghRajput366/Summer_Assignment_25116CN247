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
    int key;
    cout << "Enter the element to search: ";
    cin >> key;
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            cout << "Element found at index " << i;
            found = 1;
            break;
        }
    }
    if (found == 0) {
        cout << "Element not found";
    }

    return 0;
}