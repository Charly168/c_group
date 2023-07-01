#include <iostream>
#include <cstring>
#include <cctype>
int main()
{
    using namespace std;
    char arr[20];
    string s;
    cout << "Enter words (to stop, type the word done): ";
    cin >> s;
    int n = 0;
    while (s != "done")
    {
        n++;
        //cin.get();
        cin >> s;
    }
    cout << n << endl;

    return 0;
}