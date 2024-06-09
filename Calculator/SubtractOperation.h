#ifndef SUBTRACT_OPERATION_H
#define SUBTRACT_OPERATION_H

#include "Operation.h"

class SubtractOperation : public Operation {
public:
    double execute(double a, double b) override;
};

#endif // SUBTRACT_OPERATION_H
