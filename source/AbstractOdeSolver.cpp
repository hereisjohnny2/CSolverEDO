#include "headers/AbstractOdeSolver.hpp"
#include <cassert>

//Defines the size of the step between each iteraction in the caculation.
void AbstractOdeSolver::SetStepSize(double h) {
    stepSize = h;
}

//Defines the domain of the function i.e. the initial time and the final one.
void AbstractOdeSolver::SetTimeInterval(double t0, double t1) {
    assert(t1 > t0);
    initialTime = t0;
    finalTime = t1;
}

//Defines the inicial condition of the model when t=0.
void AbstractOdeSolver::SetInitialValue(double y0) {
    initialValue = y0;
}

double AbstractOdeSolver::GetStepSize() {
    return stepSize;
}

double AbstractOdeSolver::GetInitialTime() {
    return initialTime;
}

double AbstractOdeSolver::GetFinalTime() {
    return finalTime;
}
double AbstractOdeSolver::GetInitialValue() {
    return initialValue;
}