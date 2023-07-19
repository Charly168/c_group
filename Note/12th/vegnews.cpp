#include <iostream>
#include "strngbad.h"
using std::cout;

void callme1(StringBad &);
void callme2(StringBad );


int main(){
    using std::endl;
    {
        cout << "starting an inner block.\n";
        StringBad headline1("Celery Stalks at Midnight");//~-2 
        StringBad headline2("Lettuce Prey");//~-1 or double free
        StringBad sports("Spinach leaves Bowl for Dollars"); //~0
        cout <<"headline1: "<< headline1 <<endl;
        cout << "headline2: "<< headline2 << endl;
        cout << "sports: " << sports << endl; //3
        callme1(headline1);
        cout << "headline1: "<< headline1 << endl;
        callme2(headline2); // pro 2 then headline2 is deleted
        cout << "headline2: "<< headline2 << endl;
        cout << "Initialize one object to another:\n";
        StringBad sailor = sports; //3?~1
        cout << "sailor: " << sailor << endl;
        cout << "Assign one object to another:\n";
        StringBad knot; //3~2
        knot = headline1;
        cout << "knot: " << knot << endl;
        cout << "Exiting the block.\n";

    }

    cout << "blocks end.";

    return 0;
}

void callme1(StringBad& rsd){
    cout << "String passed by reference:\n";
    cout << "    \"" << rsd << " \"\n";
}//deep copy

void callme2(StringBad sb){
    cout << "String passed by value: \n";
    cout << "   \"" << sb << "\"\n";
}//shallow copy