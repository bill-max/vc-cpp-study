#include <iostream>
#include <string>
//1
void ShowString(const std::string & s,int times=1);
int main(){
    std::string s="test";
    //std::cout<<s<<std::endl;
    ShowString(s);
    return 0;
}
void ShowString(const std::string &s,int times){
    for(int i=0;i<times;i++){
        std::cout<<s<<std::endl;
    }
}