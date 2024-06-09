#ifndef ADD_OPERATION_H
#define ADD_OPERATION_H

#include "Operation.h"

class AddOperation : public Operation {
public:
    double execute(double a, double b) override;
};

#endif // ADD_OPERATION_H
