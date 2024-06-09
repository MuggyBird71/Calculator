#ifndef OPERATION_H
#define OPERATION_H

class Operation {
public:
    virtual double execute(double a, double b) = 0;
    virtual ~Operation() = default;
};

#endif // OPERATION_H
