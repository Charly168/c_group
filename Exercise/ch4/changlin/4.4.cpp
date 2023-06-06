#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string lastName;
    string firstName;
    string fullName;

    cout << "Enter your first name: ";
    getline(cin,firstName);
 
    cout << "Enter your last name: ";
    getline(cin,lastName);
    
    fullName = lastName + ", " + firstName;

    cout << "Here's the information in a single string: "
        << fullName << endl;

    return 0;
}
