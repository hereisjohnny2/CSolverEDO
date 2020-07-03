#include "headers/CFunc.hpp"

double CFunc::operator()(double x, double y) {
    return f(x,y);
}
    
void CFunc::SetY(double y){
    mY = y;
}

void CFunc::SetX(double x){
    mX = x;
}

double CFunc::GetY() {
    return mY;
}

double CFunc::GetX() {
    return mX;
}
