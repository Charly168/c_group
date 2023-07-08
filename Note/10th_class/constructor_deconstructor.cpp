#include <iostream>
#include <cstring>

using namespace std;

class  Student
{
public:
    string m_name;
    int m_age;
    double m_height;
    double m_weight;

    const int m_source = 20;

    Student(){

        cout << "Initialize the value of member: " << endl;
        m_name = "changlin";
        m_age = 25;
        cout << "name: " << m_name <<endl;
        cout << "age: " << m_age << endl;
    }

    void show(){

        cout << "height: " << m_height << endl;
        cout << "weight: " << m_weight << endl;
    }

};


int main(){

    // struct Student stu = {"Changlin",25};
    // struct Student *pstu = &stu;
    Student stu;
    stu.m_height = 169;
    stu.m_weight = 130;
    stu.show();


    return 0;
}