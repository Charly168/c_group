#include <iostream>
#include <cstring>

using namespace std;

struct  Student
{
    string name;
    int age;

    void show(){

        cout << "name: " << name <<endl;
        cout << "age: " << age <<endl;
    }

};


int main(){

    // struct Student stu = {"Changlin",25};
    // struct Student *pstu = &stu;
    struct Student stu, *pstu = &stu;
    pstu->name = "yichen";
    pstu->age = 26;
    pstu->show();    


    return 0;
}