#include <iostream>
#include <string>
using namespace std;
struct donation
{
    /* data */
    string name;
    double v;
};

int main()
{
    cout << "Enter the information:\n";
    cout << "Enter the number of patrons: ";
    int n;
    cin >> n;
    donation* d = new donation[n];
    for (int i=0;i<n;i++)
    {
        cout << "Enter the name: ";
        cin >> d[i].name;
        cout << "Enter the value: ";
        cin >> d[i].v;
    }

    int n_g = 0;
    cout << "Grand Patrons: " << endl;
    for (int i=0;i<n;i++)
    {
        if (d[i].v > 10000)
        {
            n_g++;
            cout << "name: " << d[i].name << endl;
        }
    }
    if (n_g == 0)
        cout << "none.\n";

    n_g = 0;
    cout << "Patrons: " << endl;
    for (int i=0;i<n;i++)
    {
        if (d[i].v <= 10000)
        {
            n_g++;
            cout << "name: " << d[i].name << endl;
        }
    }
    if (n_g == 0)
        cout << "none.\n";
    delete[] d;
}