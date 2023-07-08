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

    const int source = 20;

    void show(){

        cout << "name: " << name <<endl;
        cout << "age: " << age <<endl;
        cout << "source: " << source <<endl;
    }

};


int main(){

    // struct Student stu = {"Changlin",25};
    // struct Student *pstu = &stu;
    Student stu, *pstu = &stu;
    pstu->name = "yichen";
    pstu->age = 26;
    pstu->show();
    // cout << pstu->source;

    cout << endl;

    string Student:: *pstr;
    pstr = &Student::name;
    stu.*pstr = "changlin";
    pstu->show();

    const string Student:: *pdata = Student::data();




    return 0;
}