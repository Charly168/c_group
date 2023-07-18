//                     1   
//                 1       1
//             1       2       1
//         1       3       3       1
//     1       4       6       4       1
// 1       5       10      10      5       1
// (d,i)
// find constrain
// find relationship
//(x,y,z) 
//printf("%6f",recrusion)

#include <iostream>
using std::cout;
using std::endl;
int recursion(int d, int i){
    if(i ==0 || d==i){
        return 1;

    }

    else{

        return recursion(d-1,i-1) + recursion(d-1,i);
    }

}

int spacing(int d){

   for(int i=0;i<d-1;i++){
    cout << "    ";
   }
}

int main(){


    int deep = 10;
    for(int d=0; d<deep; d++){

        spacing(deep-d);
        for(int i=0;i<=d;i++){

            // cout << recursion(d,i);
            // spacing(1);
            printf("%8d",recursion(d,i));
        }
        cout << endl;
    }


    return 0;
}