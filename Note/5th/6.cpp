#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    char ch;
    // c style
    // getchar(int)
    // putchar(int)  
    // c++ style
    // cin.get(char)
    // cout.put(char)

    // cin.get(); //return a char
    // cin.get(ch)  ;//return an object
    // // ch = cin.get();
    // cout << ch << endl;
    // cin.get(ch);
    // cout << ch << endl;
    ch = cin.get();
    while(!cin.fail())
    {
        cout << ch;
        ch = cin.get();
    }

    // cin.get(ch);
    // cout << endl;
    // cout.put(char(ch));
    return 0;
}