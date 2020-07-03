#include <iostream>
#include "headers/CFuncLinear.hpp"

double CFuncLinear::f(double x, double y) {
    mX = x;
    return mY = mC0 + mC1*x;
}

double CFuncLinear::f(double x, double y, double c0, double c1) {
    mC0 = c0;
    mC1 = c1;
    return f(x,y);
}

void CFuncLinear::SetC0(double c0) {
    mC0 = c0;
}

void CFuncLinear::SetC1(double c1) {
    mC1 = c1;
}

double CFuncLinear::GetC0() {
    return mC0;
}

double CFuncLinear::GetC1() {
    return mC1;
}


void CFuncLinear::DataInput(std::istream& in, std::ostream& out) {
    out << "\nDigite o valor de c0: ";
    in >> mC0;
    out << "Digite o valor de c1: ";
    in >> mC1;
}