#include <cstring>
#include <iostream>
using namespace std;
// 4
struct stringy
{
    char *s;
    int ct;
};
void set(stringy &str, const char *chars);
void show(const stringy &str, int time = 1);
void show(const char *chars, int time = 1);
int main()
{
    stringy beany;
    char testing[] = "reality isn't what it used to be";
    set(beany, testing);
    cout << beany.s << endl;
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    // show(testing);
    // show(testing, 3);
    return 0;
}
void set(stringy &str, const char *chars)
{
    str.ct = strlen(chars);
    str.s = new char[str.ct];
    strcpy(str.s, chars); //内存泄漏？？
}
void show(const stringy &str, int time)
{
    for (int j = 0; j < time; ++j)
    {
        cout << str.s << endl;
    }
}
void show(const char * chars, int time){
    for (int j = 0; j < time; ++j)
    {
        cout << chars << endl;
    }
}