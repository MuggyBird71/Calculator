#ifndef DIVIDE_OPERATION_H
#define DIVIDE_OPERATION_H

#include "Operation.h"

class DivideOperation : public Operation {
public:
    double execute(double a, double b) override;
};

#endif // DIVIDE_OPERATION_H
