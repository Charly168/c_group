#include <iostream>

using namespace std;

double* f1(double arr[],int z);
double* f2(double *,int z);
double* f3(double [],int z);
typedef double* (*pf)(double *, int);

int main(){

    double arr1[2] = {1.2,2.3};
    double arr2[2] = {3.2,6.2};
    double arr3[3] = {3.2,5.1};


     pf p[3] = {f1,f2,f3};


    cout << *p[0](arr1,4) <<endl;


    // double * (*(*pd)[3])(double *,int) = &pf;  


    // cout << *(*pd[0])(arr1,4) <<endl;



    return 0 ;

}
double* f1(double arr[2],int z){

    cout << arr <<endl;

    return arr;
};
double* f2(double arr[],int z){

    return arr;
};
double* f3(double arr[],int z){

    return arr;
};