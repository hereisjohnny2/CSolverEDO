#include <iostream>
#include <cassert>

#include "headers/AbstractOdeSolver.hpp"


double AbstractOdeSolver::operator()(CFunc* function) {
    return SolveEquation(function);
}

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

void AbstractOdeSolver::DataInput() {
    std::cout << "\nDigite o valor de t0 (tempo inicial): ";
    std::cin >> initialTime;
    std::cout << "Digite o valor de t1 (tempo final): ";
    std::cin >> finalTime;
    std::cout << "Digite o valor de h (passo): ";
    std::cin >> stepSize;
    std::cout << "Digite o valor de y0 (condição inicial): ";
    std::cin >> initialValue;
}