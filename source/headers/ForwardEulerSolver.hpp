#pragma once
#include "AbstractOdeSolver.hpp"

class ForwardEulerSolver: public AbstractOdeSolver {

public:
    ForwardEulerSolver() = default;
    ForwardEulerSolver(double (*function)(double,double)) : AbstractOdeSolver(function) {};
    virtual ~ForwardEulerSolver() = default;
    virtual double RightHandSide(double x, double y) override;
    virtual double SolveEquation() override; 
};