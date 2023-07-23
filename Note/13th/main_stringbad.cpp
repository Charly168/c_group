#include <iostream>
#include "StringBad.h"
using std::cout;
using std::endl;

void callme1(StringBad & obj){
    cout << "reference called"<<endl;
    cout << obj.m_str<< endl;
};
void callme2(StringBad obj){
    // StringBad temp = StringBad obj;
    cout << "value called"<<endl;
    cout << obj.m_str<< endl;
};

int main(){
    StringBad h1("yichen eat");
    // // StringBad h2("Chagnlin eat");
    // // cout << h1 << endl;
    // // cout << h2 << endl;
    // // callme1(h1);
    // callme2(h2);

    StringBad h3;
        h3 = h1;
    // cout << h3 << endl;

    

    return 0;
}