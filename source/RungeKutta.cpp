#include "headers/RungeKutta.hpp"
#include <fstream>
#include <cassert>
#include <iostream>

double RungeKutta::SolveEquation(CFunc *function)
{

    int N = (finalTime - initialTime) / stepSize;

    double x = initialTime;
    double y = initialValue;

    double k1, k2, k3, k4;

    std::ofstream write_output((dirname + "/" + filename).c_str());
    assert(write_output.is_open());

    write_output.setf(std::ios::scientific);
    write_output.precision(5);

    for (int i = 1; i <= N; i++)
    {
        k1 = stepSize * function->f(x, y);
        k2 = stepSize * function->f(x + 0.5 * stepSize, y + 0.5 * k1);
        k3 = stepSize * function->f(x + 0.5 * stepSize, y + 0.5 * k2);
        k4 = stepSize * function->f(x + stepSize, y + k3);

        y = y + (k1 + 2 * k2 + 2 * k3 + k4) / 6;
        x = initialTime + stepSize * i;
        write_output << x << "\t" << y << "\n";
    }

    write_output.close();

    return y;
}