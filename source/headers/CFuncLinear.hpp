#pragma once 
#include "CFunc.hpp"

class CFuncLinear : public CFunc
{
protected:
    double mC0 {0.0};
    double mC1 {0.0};
public:
    CFuncLinear() = default;
    CFuncLinear(double c0, double c1) : mC0(c0), mC1(c1) {};
    ~CFuncLinear() = default;

    virtual double f(double x, double y);
    virtual double f(double x, double y, double c0, double c1);

    void SetC0(double c0);
    void SetC1(double c1);

    double GetC0();
    double GetC1();
};