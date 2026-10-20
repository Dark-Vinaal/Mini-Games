#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int number = rand() % 100 + 1;
    int guess;

    cout << "==============================" << endl;
    cout << "    ***** GUESSING GAME *****" << endl;
    cout << "==============================" << endl;

    while (true) {
        cout << "Guess a number (1-100): ";
        cin >> guess;

        if (guess < number)
            cout << "Too Low!" << endl;
        else if (guess > number)
            cout << "Too High!" << endl;
        else {
            cout << "***** Correct! You Win! *****" << endl;
            break;
        }
    }

    return 0;
}