#include <iostream>
#include "mathfuncs.h"

using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter operation (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> b;

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
    }

    return 0;
}
