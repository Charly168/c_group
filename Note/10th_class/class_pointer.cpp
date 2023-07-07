#include <iostream>
#include <cstring>

using namespace std;

class  Student
{
public:
    string name;
    int age;

    static const string Student::*data(){
        return &Student::name;
    }

    void show(){

        cout << "name: " << name <<endl;
        cout << "age: " << age <<endl;
    }

};


int main(){

    // struct Student stu = {"Changlin",25};
    // struct Student *pstu = &stu;
    Student stu, *pstu = &stu;
    pstu->name = "yichen";
    pstu->age = 26;
    pstu->show();

    cout << endl;

    string Student:: *pstr;
    pstr = &Student::name;
    stu.*pstr = "changlin";
    pstu->show();




    return 0;
}