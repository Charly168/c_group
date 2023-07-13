#include <iostream>

using std::cin;
using std::cout;
using std::endl;
void fill(double arr[], int l)
{
    int i;
    for (i=0;i<l;i++)
    {
        if (!(cin >> arr[i]))
        {
            break;
        }
    }
    cout << "lenth: " << i << endl;
}

int main()
{
    double arr[20];
    fill(arr, 5);

    return 0;
}