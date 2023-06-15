#include <iostream>
const int Max = 5;
int main()
{
    using namespace std;
    // 1. clear()
    // 2. read remained char/ string
    // 3. git a hint to continue
    int fish[Max];
    cout << "Please input: ";
    for(int i=0;i<Max;i++)
    {
        while(!(cin >> fish[i]))
        {
            cin.clear(); // step 1
            while (cin.get() != '\n') //step 2
                continue;
            cout << "Please continue: ";
        }
        cout << "Please input: ";
    }
    int sum =0;
    for (int i=0;i<Max; i++)
    {
        cout << fish[i] << endl;
        sum += fish[i];
    }
    cout << "sum is: " << sum << endl;

    return 0;
}