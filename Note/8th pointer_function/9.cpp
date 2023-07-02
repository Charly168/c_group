#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
struct donation
{
    /* data */
    string name;
    double v;
};
int main()
{
    ifstream fin;
    cout << "Enter file name: ";
    string s;
    cin >> s;
    fin.open(s);
    if(!fin.is_open())
    {
        exit(EXIT_FAILURE); 
    }
    int n;
    fin >> n;
    fin.get();
    donation *d = new donation[n];
    for (int i=0;i<n;i++)
    {
        getline(fin, d[i].name);
        fin >> d[i].v;
        fin.get();
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
    return 0;
}