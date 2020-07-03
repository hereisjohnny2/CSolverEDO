#include "headers/CFuncQuad.hpp"

double CFuncQuad::f(double x, double y) {
    mX = x;
    return mY = mC0 + mC1*x + mC2*x*x;
}

double CFuncQuad::f(double x, double y, double c0, double c1, double c2) {
    mC0 = c0;
    mC1 = c1;
    mC2 = c2;
    return f(x,y);
}

void CFuncQuad::SetC2(double c2) {
    mC2 = c2;
}

double CFuncQuad::GetC2() {
    return mC2;
}

void CFuncQuad::DataInput(std::istream& in, std::ostream& out) {
    CFuncLinear::DataInput(in, out);
    out << "Digite o valor de c2: ";
    in >> mC2;
}