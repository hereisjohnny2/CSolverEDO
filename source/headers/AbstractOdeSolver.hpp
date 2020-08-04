#pragma once
#include <string>
#include "CFunc.hpp"

class AbstractOdeSolver
{

protected:
    double stepSize;
    double initialTime;
    double finalTime;
    double initialValue;

public:
    std::string dirname;
    std::string filename;

public:
    AbstractOdeSolver() = default;
    AbstractOdeSolver(double _stepSize, double _initialTime, double _finalTime, double _initialValue)
        : stepSize(_stepSize), initialTime(_initialTime), finalTime(_finalTime), initialValue(_initialValue){};
    ~AbstractOdeSolver() = default;

    void SetStepSize(double h);
    void SetTimeInterval(double t0, double t1);
    void SetInitialValue(double y0);

    void SetOutputFile(std::string _dirname, std::string _filename);

    double GetStepSize();
    double GetInitialTime();
    double GetFinalTime();
    double GetInitialValue();

    virtual double SolveEquation(CFunc *function) = 0;
    double operator()(CFunc *function);
    void DataInput();
};