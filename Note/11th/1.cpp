#include <iostream>

class Person
{
public:
    // Person add(Person &p){
    //     Person temp;
    //     temp.a = this->a + p.a;
    //     temp.b = this->b + p.a;

    //     return temp;       
    // }
    Person operator+(Person &p){
        Person temp;
        temp.a = this->a + p.a;
        temp.b = this->b + p.a;

        return temp;       
    }

    int a;
    int b;  
};

void test(){
    using std::cout;
    Person p1;
    p1.a = 10;
    p1.b = 10;

    Person p2;
    p2.a = 10;
    p2.b = 10;

    Person p3;
    p3 = p2 + p1;

    cout << p3.a;
}

int main(){

    test();
    return 0;
}