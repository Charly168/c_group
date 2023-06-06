#include <iostream>
#include <cstring>
using namespace std;

struct Candybar  {
    char brand[20];
    float weight;
    int calorie;

};

int main(){

    Candybar snack[3]{
        {"mark",2.0,350},
        {"schocolade",3.0,20},
        {"milch",200.0,10}

    };

    cout << snack[2].brand<<endl;
    cout << snack[2].weight<<endl;

    return 0;
}