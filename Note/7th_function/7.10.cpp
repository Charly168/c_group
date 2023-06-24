#include <iostream>
using namespace std;
// int fun1(int);
// int main()
// {
//     int (*f1)(int) = fun1;
//     (*f1)(1);
//     f1(1);
//     fun1(1);
//     cout << &f1 << endl;
//     int i;
//     int * pi = &i;
//     cout << (float*)fun1 << endl;
//     cout << pi << endl;

//     return 0;
// }

// int fun1(int i)
// {
//     cout << i << endl;
//     return 0;
// }

double * f1(double arr[], int n);
double * f2(double [], int);
double * f3(double *, int);
int main()
{
    double arr[2] = {1, 2};
    
    return 0;
}
double * f1(double arr[], int n)
{
    return arr;
}

double * f2(double arrrr[], int n)
{
    return arrrr;
}

double * f3(double *arr, int n)
{
    return arr;
}