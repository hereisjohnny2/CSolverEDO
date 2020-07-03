#pragma once
#include "AbstractOdeSolver.hpp"

class ForwardEulerSolver: public AbstractOdeSolver {

public:
    ForwardEulerSolver() = default;
    ForwardEulerSolver(double _stepSize, double _initialTime, double _finalTime, double _initialValue)
        : AbstractOdeSolver(_stepSize, _initialTime, _finalTime, _initialValue) {};
    ~ForwardEulerSolver() = default;

    virtual double SolveEquation(CFunc* function) override; 
};