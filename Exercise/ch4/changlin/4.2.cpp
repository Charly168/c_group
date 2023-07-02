#include <iostream>
#include <cstring>

using namespace std;

int main(){
    // char name[20]={};
    string name;
    string dessert;

    cout << "Enter your name :\n" ;
    getline(cin, name);
    // cin.getline(name,20);
    // cin.get(name).get();
    cout << "Enter your favorite dessert:\n";
    getline(cin, dessert);
    cout << "I have some dilicious "<< dessert;
    cout << "for you," << name << ".\n";

    return 0;
}