#pragma once

class CFunc {
protected:
    double mX {0.0};
    double mY {0.0};
public:
    CFunc() = default;
    ~CFunc() = default;

    virtual double f(double x, double y) = 0;
    double operator()(double x, double y);
    
    void SetY(double y);
    void SetX(double x);

    double GetY();
    double GetX();

    void virtual DataInput() = 0;
};