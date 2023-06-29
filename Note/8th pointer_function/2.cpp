#include <iostream>
#include <array>
int main()
{
    using namespace std;
    array<double, 10>d;
    int i = 0;
    double sum = 0.0;
    cout << "Enter the first one: ";
    // while(cin >> d[i] && i < 10)
    // {
    //     sum += d[i];
    //     cout << "Enter the next one: ";
    //     if (i == 9)
    //         break;
    //     i++;
    // }
    for (i = 0;i < 10; i++)
    {
        if (cin >> d[i])
        {
            sum += d[i];
        }
        else
            break;
    }
    cout << sum / i << endl;
    return 0;
}