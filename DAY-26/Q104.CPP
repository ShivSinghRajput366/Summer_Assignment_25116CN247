#include <iostream>
using namespace std;

int main()
{
    char answer;
    int score = 0;

    cout << "===== QUIZ APPLICATION =====" << endl;

    // Question 1
    cout << "\n1. What is the capital of India?" << endl;
    cout << "A. Mumbai\nB. New Delhi\nC. Kolkata\nD. Chennai" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'B' || answer == 'b')
        score++;

    // Question 2
    cout << "\n2. Which language is used for C++ programming?" << endl;
    cout << "A. HTML\nB. Python\nC. C++\nD. CSS" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'C' || answer == 'c')
        score++;

    // Question 3
    cout << "\n3. How many days are there in a week?" << endl;
    cout << "A. 5\nB. 6\nC. 7\nD. 8" << endl;
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'C' || answer == 'c')
        score++;

    // Result
    cout << "\n===== RESULT =====" << endl;
    cout << "Your Score: " << score << "/3" << endl;

    if (score == 3)
        cout << "Excellent! 🎉";
    else if (score == 2)
        cout << "Good Job!";
    else
        cout << "Keep Practicing!";

    return 0;
}