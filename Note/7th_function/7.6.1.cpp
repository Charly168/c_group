    //                 1
    //             1       1
    //         1       2       1
    //     1       3       3       1
    // 1        4       6      4       1
// 1       5       10      10      5        1
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
void layers(int n){
    int size = n*5 ;
    char arr[size];
    int i =0;
    do{
        int m = 0;
        if(i==0 || i ==size){
            arr[i] = 1;
            arr[size] = 1;
            m += 1;
        }
        else if (i == m*n)
        {
            arr[i] = arr[0] + n;

        }
        

        i = i+n;

    }while(i<=size);
}

int main(){


    return 0;
}

