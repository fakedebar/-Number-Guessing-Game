#include <iostream>
#include <string>
#include <ctime>
#include <limits>  // Required for std::numeric_limits

using namespace std;

int main() {

    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));  // Seed the random number generator
    num = (rand() % 100) + 1;

    cout << "*********** NUMBER GUESSING GAME *********\n";

    do {
        cout << "\nEnter a guess between (1-100): ";
        
        // Input validation loop
        while (!(cin >> guess)) {  // Check if input is not a number
            cin.clear();  // Clear the error flag
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Ignore invalid input
            cout << "Invalid input! Please enter a number: ";
        }

        tries++;

        if (guess > num) {
            cout << "Too high!\n";
        }
        else if (guess < num) {
            cout << "Too low!\n";
        }
        else {
            cout << "CORRECT! # of tries: " << tries << "\n";
        }

        cout << "\n***************************";

    } while (guess != num);

    return 0;
}
