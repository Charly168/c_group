#include <iostream>
// void swap(int &a, int &b);
// int main()
// {
//     using namespace std;
//     double j =15.0;
//     double && jref = 2.0 * j + 18.5;
//     cout << jref << endl;

//     return 0;
// }

// void swap(int &a, int &b)
// {
//     using namespace std;
//     cout << 0 << endl;
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }
int clone(int ft);
int main()
{
    int i = 1;
    int t = clone(i);
    return 0;
}
int clone(int ft)
{
    int temp;
    temp = ft;
    return temp;
}