#pragma once

#include "CFuncLinear.hpp"

class CFuncQuad : public CFuncLinear 
{
protected:
    double mC2 {0.0};
public:
    CFuncQuad() = default;
    CFuncQuad(double c0, double c1, double c2) : CFuncLinear(c0, c1), mC2(c2) {};
    ~CFuncQuad() = default;

    virtual double f(double x, double y) override;
    virtual double f(double x, double y, double c0, double c1, double c2);

    void SetC2(double c2);

    double GetC2();

    void virtual DataInput() override;
};