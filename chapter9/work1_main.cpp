#include <iostream>
#include "work1.cpp"
int main()
{
    golf andy;
    setgolf(andy, "andy", 23);
    showgolf(andy);
    int s = setgolf(andy);
    cout << s << endl;
    showgolf(andy);
    system("pause");
    return 0;
}
