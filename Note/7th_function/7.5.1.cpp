#include <iostream>
long long cal(int n);
using namespace std;

int main()
{
    long long sum;
    sum = cal(5);
    cout << sum;
    return 0;
}

long long cal(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return cal(n - 1)+ cal(n-2);
}

