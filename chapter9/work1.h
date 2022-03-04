#ifndef WORK1_H_
#define WORK1_H_
#include <iostream>

const int Len = 40;
struct golf
{
    char fullname[Len];
    int handicap;
};
void setgolf(golf &g, const char *name, int hc);
int sergolf(golf &g);
void handciap(golf &g, int hc);
void showgolf(const golf &g);

#endif