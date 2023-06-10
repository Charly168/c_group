#include <iostream>
#include <cstring>
const int ArSize = 10;
int main()
{
    using namespace std;
    // char a[10] = "abcd";
    // char b[10] = "abdd";
    // cout << strcmp(a, b) << endl;
    // cout << strcmp(b, a) << endl;
    // cout << strcmp("abc", "abc") << endl;


    // char a[ArSize];
    // cin >> a;
    // int count = 0;
    // // while(!(strcmp(a, "end") == 0))
    // while(strcmp(a, "end") != 0)
    // {
    //     cin >> a;
    //     count++;
    // }
    // cout << count << " words." << endl;
    string s;
    int count = 0;
    cin >> s;
    while (s != "end")
    {
        cin >> s;
        count++;
    }
    cout << count << " words." << endl;
    cout << s.size() << endl;

    return 0;
}