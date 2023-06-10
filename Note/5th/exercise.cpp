#include <iostream>
#include <fstream>
#include <vector>

int main(){
    using namespace std;
    vector<int> Fibonacci ;

    int number;
    cout << "Please enter your number: " ;
    cin >> number;

    Fibonacci.push_back(0);
    Fibonacci.push_back(1);
    int i = 2;
    int temp;

    do{
        temp = Fibonacci[i-1] + Fibonacci[i-2];
        Fibonacci.push_back(temp);
         ++i;
    }
    while(temp<number);

    for (int i=0;i<size(Fibonacci);i++){
        cout << Fibonacci[i] << endl;
    }


    
    return 0;

}