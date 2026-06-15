#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int a[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int b[n];
    int k = 0;
    for(int i = 0; i < n; i++) {
        bool found = false;

        for(int j = 0; j < k; j++) {
            if(a[i] == b[j]) {
                found = true;
                break;
            }
        }
        if(!found) {
            b[k] = a[i];
            k++;
        }
    }
    cout << "Array after removing duplicates: ";
    for(int i = 0; i < k; i++) {
        cout << b[i] << " ";
    }
    return 0;
}