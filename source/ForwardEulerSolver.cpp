#include "headers/ForwardEulerSolver.hpp"
#include <fstream>
#include <cassert>
#include <iostream>

double ForwardEulerSolver::SolveEquation(CFunc* function) {

    int N = (finalTime - initialTime)/stepSize;

    double x = initialTime;
    double y = initialValue;

    std::ofstream write_output("output/output_forward_euler.dat");
    assert(write_output.is_open());

    write_output.setf(std::ios::scientific);
    write_output.precision(5);   

    for (int i = 1; i <= N; i++) {
        y = y + stepSize*function->f(x,y);
        x = initialTime + stepSize * i;   
        write_output << x << "\t" << y << "\n";     
    }

    write_output.close();

    return y;
}