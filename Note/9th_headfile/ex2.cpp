#include <iostream>
using namespace std;
const int s = 10;
int input(int []);
void show(int [], int);
double average(int [], int);
int main()
{
    int arr[s];
    int l = input(arr);
    show(arr, l);
    double r = average(arr, l);
    cout << "Average is: " << r << endl;
}

int input(int arr[])
{   
    int i;
    for (i=0; i< s;i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
        {
            break;
        }
    }
    cout << "i is: " << i << endl;
    return i;
}

void show(int arr[], int l)
{
    for (int i=0;i<l;i++)
    {
        cout << arr[i] << endl;
    }
}

double average(int arr[], int l)
{
    double sum = 0.0;
    for (int i=0;i<l;i++)
    {
        sum+=arr[i];
    }
    return sum / l;
}