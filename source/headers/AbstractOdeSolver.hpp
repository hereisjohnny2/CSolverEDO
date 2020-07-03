#pragma once
#include "CFunc.hpp"

class AbstractOdeSolver {

protected:
    double stepSize;
    double initialTime;
    double finalTime;
    double initialValue;

public:
    AbstractOdeSolver() = default;
    AbstractOdeSolver(double _stepSize, double _initialTime, double _finalTime, double _initialValue)
        : stepSize(_stepSize), initialTime(_initialTime), finalTime(_finalTime), initialValue(_initialValue) {};
    ~AbstractOdeSolver() = default;

    void SetStepSize(double h);
    void SetTimeInterval(double t0, double t1);
    void SetInitialValue(double y0);

    double GetStepSize();
    double GetInitialTime();
    double GetFinalTime();
    double GetInitialValue();

public:
    virtual double SolveEquation(CFunc* function) = 0;
    double operator()(CFunc* function);
};