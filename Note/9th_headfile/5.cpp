#include <iostream>
#include <array>
using namespace std;

int main(){
    const int size = 10;
    array <int,size> arr;
    for (int i=0;i<size;++i){
        int a;
        cin >>arr[i];
        
        if (arr[i] ==0){
            break;
        }
    }

    array <int,size> arr1;
    arr1 = arr;
    for (int i=0;i<size;++i){
            cout << arr1[i];


        }
    cout << "\n";
    array <int,size> arr2;
    arr2 = arr;
    int sum = 0;
    for (int i=0;i<size;++i){
        
        sum += arr2[i];


        }

    cout << sum <<endl;


    return 0;
}