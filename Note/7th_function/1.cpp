// 1. a function can not return an array
// int *arr[4]  an array of pointer
// int (*arr)[4]   - - - -
#include <iostream>
void show(char *p);

// int main()
// {
//     using namespace std;
//     // const int a = 5;
//     char a[] = "sjrfj"; 
//     5;
//     // const int *p = &a;
//     show(a);

//     return 0;
// }

// void show(char *p)
// {
//     using namespace std;
//     cout << p << endl;
// }

#include <iostream>
int main()
{
    using namespace std;
    char* a ="asdfj\ndfjf";
    char b[5] = "sdj";
    char *c = b;
    while (*a)
    {
        cout << *a;
        a++;
    }
    while (*c)
    {
        cout << *c;
        c++;
    }
}