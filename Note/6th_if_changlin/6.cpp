#include <iostream>
#include <string>
int main()
{
    using namespace std;
    
    // 1. cin
    // 1) skip space or enter...
    // 2) read until space
    // 3) do not skip space in the end
    // 4) return an object   can concat.

    // int i;
    // char ch;
    // string s;
    // (cin >> i).get();
    // cout << i << endl;
    // getline(cin, s);
    // cout << s << endl;

    // 2. cin.get(ch)
    // 1) return object    can concat
    // 2) char -> ch
    // 3) if bool 
    // 4) read one letter each time
    // char ch;
    // while(cin.get(ch))
    // {
    //     cout << ch << endl;
    // }

    // 3. cin.get()
    // 1) return a char not an object   no concat
    // 2) meet eof  return -1
    // 4) read one letter each time
    // char ch;
    // while ((ch = cin.get()) != EOF)
    // {
    //     cout << ch << endl;
    // }

    // 4 cin.get(name, n, (terminate))
    // 1) return an object  can concat.
    // 2) read a string not a letter
    // 3) do not skip space or enter
    // char ch[10];
    // int i;
    // string s;
    // cin.get(ch, 10).get();
    // cout << ch << endl;
    // cin >> i;
    // cout << i << endl;
    // getline(cin, s);
    // cout << s << endl;

    // 5. getline(cin, string)
    // 1) read a line
    // 2) skip space or enter...
    // 3) string
    string s;
    char arr[10];
    // getline(cin, s);
    cin >> arr;
    char ch;
    ch = cin.get();
    cout << ch << endl;
    return 0;
}