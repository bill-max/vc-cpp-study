#ifndef WORK4_H_
#define WORK4_H_
#include <iostream>

namespace SALES
{
    const int QUATERS = 4;
    struct Sales
    {
        double sales[QUATERS];
        double average;
        double max;
        double min;
    };
    void setSales(Sales &s, const double ar[], int n);
    void setSales(Sales &s);
    void showSales(const Sales &s);
}

#endif