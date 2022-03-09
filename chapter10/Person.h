#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
    static const int LIMIT = 25;
    string lname;
    char fname[LIMIT];

public:
    Person()
    {
        lname = "";
        fname[0] = '\0';
    }
    Person(const string &ln, const char *fn = "heyyou");
    void Show() const;
    void FormalShow() const;
};

#endif