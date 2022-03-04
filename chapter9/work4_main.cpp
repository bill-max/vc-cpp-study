#include <string>
#include <iostream>
#include "work4.cpp"
using namespace std;
int main()
{
    SALES::Sales one;
    SALES::Sales two;
    double a[4] = {1.2, 2.1, 2.3, 3};
    SALES::setSales(one, a, 4);
    SALES::showSales(one);
    SALES::setSales(two);
    SALES::showSales(two);
    system("pause");
    return 0;
}