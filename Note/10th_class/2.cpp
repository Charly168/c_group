#include <iostream>
#include <string>
class Person
{
public:
    Person(int a)
    {
        this->age = a;
    }

    Person& add(Person &p)
    {
        this->age += p.age;
        return *this;
    }

public:
    int age = 0;
};

int main()
{
    using std::cout;
    using std::endl;
    Person p1(5);
    Person p2(10);
    Person p3 = p2.add(p1).add(p1);
    cout << p2.age << endl;
    return 0;
}