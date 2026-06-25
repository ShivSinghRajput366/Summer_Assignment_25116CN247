#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));              // Generate different random number each time
    int secret = rand() % 100 + 1; // Random number between 1 and 100
    int guess, attempts = 0;

    cout << "===== Number Guessing Game =====" << endl;
    cout << "Guess a number between 1 and 100." << endl;

    do
    {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secret)
            cout << "Too High!" << endl;
        else if (guess < secret)
            cout << "Too Low!" << endl;
        else
            cout << "Congratulations! You guessed the number." << endl;

    } while (guess != secret);

    cout << "You guessed it in " << attempts << " attempts." << endl;

    return 0;
}