#include <iostream>
using namespace std;

int main(){
int n;
int sum;
cin >> n;

sum = 1;
while (n >=1)
{
    sum *= n ;
    n -= 1  ;
}

cout << sum;
    




return 0;

}