#include <iostream>

using namespace std;

int main(){

    int i;
    int j;
    cin >> i;
    cin >> j;
    while((i != 0)&& (j !=0)){
        cout << 2.0*i*j/(i+j) << endl;
        cin >> i;
        cin >> j;
    }

    return 0;
}