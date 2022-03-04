#include<iostream>
//6
template<class T>
T maxn(const T *t,int n){
    T m=t[0];
    for(int i=1;i<n;++i){
        if(m<t[i]) m=t[i];
    }
    return m;
}
int main(){
    int a[6]={1,2,3,4,3,2};
    double v[4]={1.2,2,3,5.3};
    auto c=maxn<int>(a,6);
    auto b=maxn(v,4);
    std::cout<<c<<std::endl;
    std::cout<<b<<std::endl;
    return 0;
}