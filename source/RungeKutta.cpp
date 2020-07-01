#include "headers/RungeKutta.hpp"
#include <fstream>
#include <cassert>
#include <iostream>

double RungeKutta::RightHandSide(double y, double t) {
    return RightHandSideFunction(y,t);
}

double RungeKutta::SolveEquation() {

    double t0 = GetInitialTime();
    double t1 = GetFinalTime();
    double h = GetStepSize();
    double y0 = GetInitialValue();

    int N = (t1 - t0)/h;

    double t = t0;
    double y = y0;

    double k1, k2, k3, k4;

    std::ofstream write_output("output/output_runge_kutta_4.dat");
    assert(write_output.is_open());

    write_output.setf(std::ios::scientific);
    write_output.precision(5);  

    for (int i = 1; i <= N; i++) {
        k1 = h*RightHandSide(y,t);
        k2 = h*RightHandSide(y+0.5*k1,t+0.5*h);
        k3 = h*RightHandSide(y+0.5*k2,t+0.5*h);
        k4 = h*RightHandSide(y+k3,t+h);
        
        y = y + (k1+2*k2+2*k3+k4)/6;
        t = t0 + h*i;   
        write_output << t << "\t" << y << "\n";     
    }

    write_output.close();

    return y;
}