#include <iostream>
#include <cstdlib>
#include <cassert>
#include "headers/AbstractOdeSolver.hpp"
#include "headers/ForwardEulerSolver.hpp"
#include "headers/RungeKutta.hpp"

double linear(double y, double t) {return t+1;}

int main()
{

    double stepSize = 0.01;
    double initialTime = 0;
    double finalTime = 1;
    double initialValue = 1;

    std::cout << "Resolvendo EDO utilizando método Runge-Kutta: " << std::endl;
    AbstractOdeSolver *eq1 = new RungeKutta(&linear);
    eq1->SetStepSize(stepSize);
    eq1->SetTimeInterval(initialTime, finalTime);
    eq1->SetInitialValue(initialValue);
    std::cout << eq1->SolveEquation() << std::endl;
    delete eq1;

    std::cout << "\nResolvendo EDO utilizando método Euler: " << std::endl;
    AbstractOdeSolver *eq2 = new ForwardEulerSolver(&linear);
    eq2->SetStepSize(stepSize);
    eq2->SetTimeInterval(initialTime, finalTime);
    eq2->SetInitialValue(initialValue);
    std::cout << eq2->SolveEquation() << std::endl;
    delete eq2;

    return 0;
}
