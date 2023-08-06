#include <iostream>

int main(){

    for(int i=0;i<100;i++){

        if((i%10)==7 || ((i%7)==0) || ((i/10)==7)){
            std::cout << "skip" <<" ";
        }else{std::cout<<i<<" ";}
    }

    return 0;
}