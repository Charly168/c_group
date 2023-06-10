#include <iostream>
const int ArSize = 16;
int main()
{
    using namespace std;
    long long factorials[ArSize];
    int i = 0;
    factorials[1] = factorials[0] = 1LL;
    for (int i=2; i<ArSize; i++)
    {
        factorials[i] = i * factorials[i - 1];
    }
    cout << i << endl;
    for (int i = 0; i < ArSize; i++)
    {
        cout << i << "!= " << factorials[i] << endl;
    }
    return 0;
}