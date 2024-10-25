#ifndef ARRAY_H
#define ARRAY_H

#include "number.h"
#include "iostream"


class Array{
private:
    int length;
    number *arr;

public:
    Array(int length = 0);

    ~Array();

    int getLength();

    void fill();

    bool resize(int length);

    bool changeElement(int index, number value);

    void printArray();

    number averageValue();

    number SKO();

    void shakerSort(bool reverse = false);


};
#endif // ARRAY_H
