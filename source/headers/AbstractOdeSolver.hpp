#pragma once

class AbstractOdeSolver {

protected:
    double stepSize;
    double initialTime;
    double finalTime;
    double initialValue;
    double (*RightHandSideFunction)(double y, double t);

public:
    AbstractOdeSolver() = default;
    AbstractOdeSolver(double (*function)(double, double)) {RightHandSideFunction = function;}
    virtual ~AbstractOdeSolver() = default;
    void SetStepSize(double h);
    void SetTimeInterval(double t0, double t1);
    void SetInitialValue(double y0);
    double GetStepSize();
    double GetInitialTime();
    double GetFinalTime();
    double GetInitialValue();

public:
    virtual double RightHandSide(double y, double t) = 0;
    virtual double SolveEquation() = 0;
};