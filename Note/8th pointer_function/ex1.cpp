#include <iostream>
#include <cctype>

int main()
{
    using namespace std;
    char ch;
    while((ch = cin.get()) != '@')
    {
        if (isalpha(ch))
        {
            if (islower(ch))
                cout << char(toupper(ch));
            if (isupper(ch))
                cout << char(tolower(ch));
        }
    }
    return 0;
}