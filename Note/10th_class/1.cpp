#include <iostream>
#include <cstring>
using namespace std;

class Person
{
public:
    Person(string s, int a)
    {
        name = s;
        age = new int(a);
    }

    // Person(const Person &p)
    // {
    //     age = p.age;
    // }

    Person(const Person &p)
    {
        age = new int(*p.age);
    }

    ~Person()
    {
        if(age != NULL)
        {
            cout << "end " << endl;
            delete age;
            age = NULL;
        }
    }

public:
    string name;
    int* age;
};

int main()
{
    Person p2("sb", 1);
    cout << p2.name << endl;
    Person p1 = p2;
    return 0;
}