#include "headers/ForwardEulerSolver.hpp"
#include <fstream>
#include <cassert>
#include <iostream>

double ForwardEulerSolver::RightHandSide(double y, double t) {
    return RightHandSideFunction(y,t);
}

double ForwardEulerSolver::SolveEquation() {

    double t0 = GetInitialTime();
    double t1 = GetFinalTime();
    double h = GetStepSize();
    double y0 = GetInitialValue();

    int N = (t1 - t0)/h;

    double t = t0;
    double y = y0;

    std::ofstream write_output("output/output_forward_euler.dat");
    assert(write_output.is_open());

    write_output.setf(std::ios::scientific);
    write_output.precision(5);   

    for (int i = 1; i <= N; i++) {
        y = y + h*RightHandSide(y,t);
        t = t0 + h*i;   
        write_output << t << "\t" << y << "\n";     
    }

    write_output.close();

    return y;
}