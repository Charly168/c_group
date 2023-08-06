#include <iostream>

int main(){

    for(int i=0;i<=9;i++){
        for(int j=1;j<=i;j++){
            std::cout << j << "*" << i << "=" << j*i <<"\t";
        }
        std::cout<<std::endl;
    }

    return 0;
}