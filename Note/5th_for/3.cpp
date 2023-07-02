#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    char s[10] = "abcdefghi";
    char temp;
    int l;
    l = strlen(s);
    int i;
    int j;
    for (i=0, j=l-1; i<j; i++, j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    cout << s << endl;
    return 0;
}
