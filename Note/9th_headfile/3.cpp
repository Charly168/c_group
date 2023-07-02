#include <iostream>
using namespace std;

int i; //static, externlinkage  
static int j;//static, internlinkage


int main(){

    int j; //auto, no linkage 
    static int k ; // static, nolinkage
    cout << &k << endl;
    {
        int k;
        cout << &k <<endl;
    }

    cout << i << &i <<endl;
    cout << j << &j <<endl;

    volatile int x = 10;
}