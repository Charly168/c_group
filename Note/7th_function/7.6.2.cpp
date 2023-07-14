#include <iostream>

int val(int d, int i)
{
    if (i == 0 || i == d)
        return 1;
    else
        return val(d-1, i-1) + val(d-1, i);
}

int main()
{
    using std::cout;
    using std::endl;
    for(int d=0;d<10;d++)
    {
        for (int i =0;i<=d;i++)
        {
            cout << val(d, i);
        }
        cout << endl;
    }
    return 0;
}