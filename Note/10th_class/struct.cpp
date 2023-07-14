#include <iostream>
#include <cstring>
#include <string>
using namespace std;

struct st_gir{

    string name;
    int age;
    int height;
    double weight;
    char sex='X';
    int yz;
    string special;
    string memo;


};
void setvalue(st_gir&girl, string name,int age,int height,double weight,
char sex,int yz, string special,string memo)
{
    girl.name = name;
    girl.age = age;
    girl.height = height;
    girl.weight = weight;
    girl.sex = sex;
    girl.yz = yz;
    girl.special = special;
    girl.memo = memo;
};

void show(const st_gir & girl){

    cout << "name:" << girl.name << endl;
}

int main(){
    st_gir girl;
    setvalue(girl,"xishi",26,170,50.5,'X',1,"sing,dance","good");
    show(girl);
    return 0;
}

