#include <iostream>
#include <string>
template <typename T>
T FindMax(const T *x){
    T max=x[0];
    for (int i=1;i<5;++i){
        if(x[i]>max){
            max=x[i];
        }
    }
    return max;
}
int main() {
    using namespace std;
    int t[5]={1,2,3,4,5};
    double a[5]={1.2,2.3,3.4,5.6,3.4};
    auto s=FindMax(t);//隐式类型推导
    auto c=FindMax<double>(a);//显示类型推导
    cout<<s<<endl;
    cout<<c<<endl;
    return 0;
}