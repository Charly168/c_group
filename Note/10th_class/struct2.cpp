#include <iostream>
#include <cstring>
#include <string>
using namespace std;
// The members of struct can direct access the element of struct
struct st_gir{

    string name;
    int age;

    void setvalue(string name1,int age1)
    {
        name = name1;
        age = age1;

    };

    void show(){

        cout << "name: " << name << endl;
        cout << "age: " << age <<endl;
    };
};



int main(){
    st_gir girl;
    girl.setvalue("xishi",26);
    girl.show();
    return 0;
}

