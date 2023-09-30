#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator with the current time

    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;

    while (true) {
        cout << "Guess the number between 1 and 100: ";
        cin >> guess;
        attempts++;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed it in " << attempts << " attempts." << endl;
            break;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Too high! Try again." << endl;
        }
    }

    return 0;
}


