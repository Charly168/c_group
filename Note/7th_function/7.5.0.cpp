#include <iostream>
long long cal(int n);
using namespace std;

int main()
{
    long long sum;
    sum = cal(10);
    cout << sum;
    return 0;
}

long long cal(int n)
{
    if (n == 0)
        return 1;
    else
        return n * cal(n - 1);
}