#ifndef MULTIPLY_OPERATION_H
#define MULTIPLY_OPERATION_H

#include "Operation.h"

class MultiplyOperation : public Operation {
public:
    double execute(double a, double b) override;
};

#endif // MULTIPLY_OPERATION_H
