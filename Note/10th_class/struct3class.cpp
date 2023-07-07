#include <iostream>
#include <cstring>
#include <string>
using namespace std;
// The members of struct can direct access the element of struct
class CGirl{
public:
    string name;
    int age;

    void setvalue(string name1,int age1);

    void show(){

        cout << "name: " << name << endl;
        cout << "age: " << age <<endl;
    };
};

void CGirl::setvalue(string name1,int age1)
{
    name = name1;
    age = age1;

};



int main(){
    CGirl girl;
    girl.setvalue("xishi",26);
    girl.show();
    return 0;
}

// Note:
// 1. The menber of class can be variable and function
// 2. the menber of class can be properties
// 3. functions of class are named method or action,they can also be defined outside the class
// 4. Instantiation
// 5. The scope and lifetime of class member variables and member functions are the same as the scope and lifetime of objects. 


