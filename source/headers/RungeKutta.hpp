#pragma once
#include "AbstractOdeSolver.hpp"

class RungeKutta : public AbstractOdeSolver
{

public:
    RungeKutta() = default;
    ~RungeKutta() = default;
    RungeKutta(double _stepSize, double _initialTime, double _finalTime, double _initialValue)
        : AbstractOdeSolver(_stepSize, _initialTime, _finalTime, _initialValue){};

    virtual double SolveEquation(CFunc *function) override;
};