#include <iostream>
#include <set>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;
    cout << "Enter size of second array: ";
    cin >> n2;

    int arr1[n1], arr2[n2];

    cout << "Enter elements of first array:\n";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter elements of second array:\n";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    // Store elements of first array in a set
    set<int> s1(arr1, arr1 + n1);
    set<int> intersection;

    // Check common elements
    for (int i = 0; i < n2; i++) {
        if (s1.find(arr2[i]) != s1.end()) {
            intersection.insert(arr2[i]);
        }
    }

    cout << "Intersection of arrays:\n";
    for (int x : intersection) {
        cout << x << " ";
    }

    return 0;
}
