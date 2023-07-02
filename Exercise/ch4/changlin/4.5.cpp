#include <iostream>
#include <cstring>
using namespace std;

struct Candybar{
    char brand[20];
    float weight;
    int calorie;

};

int main(){

    Candybar snack;
    strcpy(snack.brand,"Mocha Munch");
    snack.weight = 2.3;
    snack.calorie = 350;

    cout << snack.brand <<endl; 
    cout << snack.weight <<endl;
    cout << snack.calorie <<endl;
    return 0;
}