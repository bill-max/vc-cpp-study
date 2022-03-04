#include<iostream>
#include<string>
//3
using namespace std;
void ToUpper(string & str);
int main(){
    string s="go away";
    ToUpper(s);
    cout << s<<endl;
    return 0;
}
void ToUpper(string & str){
    string::iterator iter;
    for(int i=0;i<str.size();++i){
        str[i]-=32;
    }
}
