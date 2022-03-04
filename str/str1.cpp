#include <iostream>
#include <cstdio>
int main()
{
    //-----1-----
    int *pr1 = new int;
    delete pr1;
    //-----2-----
    int hidden = 3;
    int *pr2 = &hidden;
    //不要将两个指针指向一块内存
    //-----3----动态数组
    int *arr=new int [10];
    //new返回第一个元素的地址
    delete [] arr;
    return 0;
}