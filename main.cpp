#include <iostream>
#include <cstdlib>
#include <ctime>
#include "randfuncs.h"

using namespace std;

int main() {
    srand(time(0));

    int choice;

    cout << "Random Generator\n";
    cout << "1. Flip Coin\n";
    cout << "2. Roll 6-sided Die\n";
    cout << "3. Roll 10-sided Die\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            if (flipCoin() == 0)
                cout << "Heads\n";
            else
                cout << "Tails\n";
            break;

        case 2:
            cout << "You rolled: " << rollSixSidedDie() << "\n";
            break;

        case 3:
            cout << "You rolled: " << rollTenSidedDie() << "\n";
            break;

        default:
            cout << "Invalid choice\n";
    }

    return 0;
}
