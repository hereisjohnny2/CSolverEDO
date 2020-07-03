#include <iostream>
#include <cstdlib>
#include <cassert>

#include "headers/AbstractOdeSolver.hpp"
#include "headers/ForwardEulerSolver.hpp"
#include "headers/RungeKutta.hpp"
#include "headers/CFuncLinear.hpp"

int main()
{

    double stepSize = 0.01;
    double initialTime = 0;
    double finalTime = 1;
    double initialValue = 1;

    CFuncLinear linear = CFuncLinear(1,1);

    std::cout << "\nResolvendo EDO utilizando método Runge-Kutta: " << std::endl;
    RungeKutta eq1 = RungeKutta(stepSize, initialTime, finalTime, initialValue);
    std::cout << eq1.SolveEquation(&linear) << std::endl;

    std::cout << "\nResolvendo EDO utilizando método Euler: " << std::endl;
    ForwardEulerSolver eq2 = ForwardEulerSolver(stepSize, initialTime, finalTime, initialValue);
    std::cout << eq2.SolveEquation(&linear) << std::endl;

    return 0;
}
