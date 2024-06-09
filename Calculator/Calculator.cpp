#include "Calculator.h"
#include <fstream>
#include <iostream>

void Calculator::addHistory(const std::string& entry) {
    history.push_back(entry);
}

void Calculator::performOperation(Operation* op, double a, double b) {
    double result = op->execute(a, b);
    std::cout << "Result: " << result << std::endl;
    addHistory(std::to_string(a) + " ? " + std::to_string(b) + " = " + std::to_string(result));
}

void Calculator::showHistory() const {
    std::cout << "Calculation History:" << std::endl;
    for (const auto& entry : history) {
        std::cout << entry << std::endl;
    }
}

void Calculator::saveHistory(const std::string& filename) const {
    std::ofstream file(filename);
    if (file.is_open()) {
        for (const auto& entry : history) {
            file << entry << std::endl;
        }
        file.close();
    }
    else {
        std::cerr << "Error: Unable to open file for writing." << std::endl;
    }
}

void Calculator::loadHistory(const std::string& filename) {
    std::ifstream file(filename);
    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            history.push_back(line);
        }
        file.close();
    }
    else {
        std::cerr << "Error: Unable to open file for reading." << std::endl;
    }
}
