#include<iostream>
#include<string>
//2
struct CandyBar{
    std::string name;
    double weight;
    int temperature;
};
void Set(CandyBar & CandyBar,std::string name="Munch",double w=2.85,int t=350);
void Show(const CandyBar &candyBar) ;
int main(){
    CandyBar c;
    Set(c);
    Show(c); 
    return 0;
}
void Set(CandyBar & candyBar,std::string name,double w,int t){
    candyBar.name=name;
    candyBar.weight=w;
    candyBar.temperature=t;
}
void Show(const CandyBar & candyBar){
    std::cout<<"name:"<<candyBar.name
    <<"weight:"<<candyBar.weight
    <<"temperature:"<<candyBar.temperature<<std::endl;
}