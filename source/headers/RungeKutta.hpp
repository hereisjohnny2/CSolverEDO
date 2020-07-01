#pragma once
#include "AbstractOdeSolver.hpp"

class RungeKutta: public AbstractOdeSolver {

public:
    RungeKutta() = default;
    RungeKutta(double (*function)(double,double)) : AbstractOdeSolver(function) {};
    virtual ~RungeKutta() = default;
    virtual double RightHandSide(double y, double t) override;
    double SolveEquation(); 
};