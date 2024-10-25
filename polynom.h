#ifndef POLYNOM_H
#define POLYNOM_H

#include "number.h"

class Polynom {
    number* roots = nullptr;
    number* coefficients = nullptr;
    int degree = 0;
public:
    Polynom();

    Polynom* fill(number leadingCoefficient, number* roots, int rootsCount);

    void printWithDegrees();

    std::string strWithDegrees();

    void printWithRoots();

    number valueAtPoint(number point);


    friend ostream& operator << (ostream & os, const Polynom & c);

};

#endif // POLYNOM_H
