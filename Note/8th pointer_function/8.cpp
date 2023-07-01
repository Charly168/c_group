#include <iostream>
#include <cctype>
#include <cstring>
int main()
{
    using namespace std;
    cout << "Enter words (q to quit): ";
    char arr[20];
    cin >> arr;
    int n_v = 0;
    int n_c = 0;
    int n_o = 0;

    while (strcmp(arr, "q")!=0)
    {
        if (!isalpha(arr[0]))
        {
            n_o++;
            cin >> arr;
            continue;
        }
        if (arr[0] == 'a' || arr[0] == 'A'
        || arr[0] == 'e' || arr[0] == 'E'
        || arr[0] == 'i' || arr[0] == 'I'
        || arr[0] == 'o' || arr[0] == 'O'
        || arr[0] == 'u' || arr[0] == 'U')
            n_v++;
        else
            n_c++;
        cin >> arr;
    }
    cout << n_v << endl;
    cout << n_c << endl;
    cout << n_o << endl;
    return 0;
}