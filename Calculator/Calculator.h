#ifndef CALCULATOR_H
#define CALCULATOR_H

#include "Operation.h"
#include <vector>
#include <string>

class Calculator {
private:
    std::vector<std::string> history;
    void addHistory(const std::string& entry);

public:
    void performOperation(Operation* op, double a, double b);
    void showHistory() const;
    void saveHistory(const std::string& filename) const;
    void loadHistory(const std::string& filename);
};

#endif // CALCULATOR_H
