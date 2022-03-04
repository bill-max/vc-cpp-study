#include <iostream>
#include <string>
#include "work1.h"
using namespace std;
void setgolf(golf &h, const char *name, int hc)
{
    snprintf(h.fullname, sizeof(h.fullname), "%s", name);
    h.handicap = hc;
}
int setgolf(golf &g)
{
    if (cin >> g.fullname)
    {
        return 1;
    }
    else
        return 0;
}
void handicap(golf &g, int hc)
{
    g.handicap = hc;
}
void showgolf(const golf &g)
{
    cout << g.fullname << endl;
    cout << g.handicap << endl;
}