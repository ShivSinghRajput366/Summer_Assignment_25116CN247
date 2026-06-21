#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int words = 0;
    bool inWord = false;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ' && inWord == false) {
            words++;
            inWord = true;
        }
        else if (str[i] == ' ') {
            inWord = false;
        }
    }

    cout << "Number of words = " << words;

    return 0;
}