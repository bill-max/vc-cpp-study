#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "work4.h"
namespace SALES
{
    void setSales(Sales &s, const double ar[], int n)
    {
        double sum = 0;
        s.min = INT_MAX;
        s.max = INT_MIN;
        for (int i = 0; i < n; ++i)
        {
            sum += ar[i];
            s.sales[i] = ar[i];
            if (s.max < ar[i])
                s.max = ar[i];
            if (s.min > ar[i])
                s.min = ar[i];
        }
        s.average = sum / n;
    }
    void setSales(Sales &s)
    {
        double sum = 0;
        double temp = 0;
        s.min = INT_MAX;
        s.max = INT_MIN;
        int i = 0;
        while (scanf("%lf", &temp) != EOF)
        {
            sum += temp;
            s.sales[i] = temp;
            if (s.max < temp)
                s.max = temp;
            if (s.min > temp)
                s.min = temp;
            ++i;
        }
        s.average = sum / i;
    }
    void showSales(const Sales &s)
    {
        std::cout << s.sales << std::endl;
        std::cout << "ave:" << s.average
                  << "max:" << s.max
                  << "min:" << s.min << std::endl;
    }
}