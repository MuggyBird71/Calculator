#include "Calculator.h"
#include "AddOperation.h"
#include "SubtractOperation.h"
#include "MultiplyOperation.h"
#include "DivideOperation.h"
#include <iostream>
#include <memory>

int main() {
    Calculator calc;
    char choice;
    double num1, num2;
    std::unique_ptr<Operation> op = nullptr;

    calc.loadHistory("history.txt");

    do {
        std::cout << "Enter operation (+, -, *, /) or q to quit: ";
        std::cin >> choice;

        if (choice == 'q') break;

        std::cout << "Enter two numbers: ";
        std::cin >> num1 >> num2;

        switch (choice) {
        case '+': op = std::make_unique<AddOperation>(); break;
        case '-': op = std::make_unique<SubtractOperation>(); break;
        case '*': op = std::make_unique<MultiplyOperation>(); break;
        case '/': op = std::make_unique<DivideOperation>(); break;
        default:
            std::cout << "Invalid operation!" << std::endl;
            continue;
        }

        calc.performOperation(op.get(), num1, num2);
    } while (choice != 'q');

    calc.showHistory();
    calc.saveHistory("history.txt");

    return 0;
}
