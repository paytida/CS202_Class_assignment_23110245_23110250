#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>

#include "mathfuncs.h"
#include "randfuncs.h"

namespace {

void clearInvalidInput() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void runArithmeticOperation() {
    double firstNumber;
    double secondNumber;
    char operation;

    std::cout << "Enter first number: ";
    if (!(std::cin >> firstNumber)) {
        if (!std::cin.eof()) {
            clearInvalidInput();
            std::cout << "Invalid number.\n";
        }
        return;
    }

    std::cout << "Enter operation (+, -, *, /): ";
    if (!(std::cin >> operation)) {
        return;
    }

    std::cout << "Enter second number: ";
    if (!(std::cin >> secondNumber)) {
        if (!std::cin.eof()) {
            clearInvalidInput();
            std::cout << "Invalid number.\n";
        }
        return;
    }

    switch (operation) {
        case '+':
            std::cout << "Result: " << add(firstNumber, secondNumber) << '\n';
            break;
        case '-':
            std::cout << "Result: " << subtract(firstNumber, secondNumber) << '\n';
            break;
        case '*':
            std::cout << "Result: " << multiply(firstNumber, secondNumber) << '\n';
            break;
        case '/':
            if (secondNumber == 0) {
                std::cout << "Error: Cannot divide by zero.\n";
            } else {
                std::cout << "Result: " << divide(firstNumber, secondNumber) << '\n';
            }
            break;
        default:
            std::cout << "Invalid operation.\n";
    }
}

}  // namespace

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    while (true) {
        int choice;

        std::cout << "\nCalculator and Random Generator\n"
                  << "1. Arithmetic operation\n"
                  << "2. Flip coin\n"
                  << "3. Roll 6-sided die\n"
                  << "4. Roll 10-sided die\n"
                  << "0. Exit\n"
                  << "Enter your choice: ";

        if (!(std::cin >> choice)) {
            if (std::cin.eof()) {
                break;
            }
            clearInvalidInput();
            std::cout << "Invalid choice.\n";
            continue;
        }

        switch (choice) {
            case 0:
                return 0;
            case 1:
                runArithmeticOperation();
                break;
            case 2:
                std::cout << (flipCoin() == 0 ? "Heads\n" : "Tails\n");
                break;
            case 3:
                std::cout << "You rolled: " << rollSixSidedDie() << '\n';
                break;
            case 4:
                std::cout << "You rolled: " << rollTenSidedDie() << '\n';
                break;
            default:
                std::cout << "Invalid choice.\n";
        }
    }

    return 0;
}
