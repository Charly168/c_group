#include <iostream>
int main()
{
    using namespace std;
    int arr[2] = {0, 2};
    int x;
    int* p = arr;
    x = (*p)++;
    cout << x << endl;
    cout << p[0] << endl;
    return 0;
}