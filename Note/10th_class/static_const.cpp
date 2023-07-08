#include <iostream>
#include <cstring>

using namespace std;

int main(){

    static string str1 = "changlin";
    cout << "address of str1: " << &str1 << endl;
    static string str2 = "yichen";

    {
        cout << "address of str1: " << &str1<< endl;

        static string str2 = "yichen";
        cout << "address of str2: " << &str2<< endl;

    };
        cout << "address of str2: " << &str2<< endl;


    


    return 0;
}