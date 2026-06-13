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
    cout << "Enter the element to find frequency: ";
    cin >> key;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            count++;
        }
    }
    cout << "Frequency of " << key << " = " << count;

    return 0;
}