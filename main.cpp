#include <iostream>
#include "mathfuncs.h"
#include <cstdlib>
#include <ctime>
#include "randfuncs.h"

using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter operation (+, -, *, /): ";
    cin >> op;
    srand(time(0));

    int choice;

    switch (op) {
        case '+':
            cout << "Result: " << add(a, b) << endl;
            break;

        case '-':
            cout << "Result: " << subtract(a, b) << endl;
            break;

        case '*':
            cout << "Result: " << multiply(a, b) << endl;
            break;

        case '/':
            if (b == 0)
                cout << "Error: Cannot divide by zero." << endl;
            else
                cout << "Result: " << divide(a, b) << endl;
            break;

        default:
            cout << "Invalid operation." << endl;
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
