#include "DivideOperation.h"
#include <iostream>

double DivideOperation::execute(double a, double b) {
    if (b == 0) {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0;  // Error value
    }
    return a / b;
}
