#include <iostream>
#include <cstring>
#include <string>
using namespace std;
// The members of struct can direct access the element of struct
class CGirl{
public:
    string name;
private:
    int age;
public:
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

