#include <iostream>
using namespace std;

extern int var = 2;


void year1(){
    static int  year;
    cout << year << endl;
    cout << year ++ <<endl;
    cout <<&year <<endl;

}

