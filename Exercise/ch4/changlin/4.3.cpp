#include <iostream>
#include <cstring>
using namespace std;

int main(){

    int Size = 20;
    char lastName[Size] = {};
    string firstName;

    cout << "Enter your first name: ";
    getline(cin,firstName);
    firstName = ", " + firstName;
    cout << "Enter your last name: ";
    cin.getline(lastName,Size);

    strcat(lastName,firstName.c_str());
    cout << "Here's the information in a single string: "
        << lastName << endl;

    return 0;
}
