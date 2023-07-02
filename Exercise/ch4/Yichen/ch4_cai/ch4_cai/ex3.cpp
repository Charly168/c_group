#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    cout << "ENter your first name: ";
    char f_n[20];
    cin.get(f_n, 20).get();
    cout << "Enter your last name: ";
    char l_n[20];
    cin.get(l_n, 20);
    
    cout << strcat(strcat(l_n, ", "), f_n) << endl;
}