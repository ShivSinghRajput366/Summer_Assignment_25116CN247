#include <iostream>
using namespace std;

int main() {
    char str[100], temp;
    int length = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    // Find string length
    while (str[length] != '\0') {
        length++;
    }

    // Reverse the string
    for (int i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    cout << "Reversed string: " << str;

    return 0;
}