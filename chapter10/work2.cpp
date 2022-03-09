#include "Person.cpp"
#include <iostream>
#include <string>
using namespace std;
int main()
{
    Person one;
    Person two("Smtthcraft");
    Person three("Dimwiddy", "Sam");
    one.Show();
    cout << endl;
    two.Show();
    cout << endl;
    three.FormalShow();
    system("pause");
    return 0;
}