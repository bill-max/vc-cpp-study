#include "Person.h"
#include <string>
using namespace std;
Person::Person(const string &ln, const char *fn)
{
    lname = ln;
    snprintf(fname, sizeof(fname), " %s", fn);
}
void Person::Show() const
{
    cout << fname << " * " << lname << endl;
}
void Person::FormalShow() const
{

    cout << lname << " * " << fname << endl;
}
