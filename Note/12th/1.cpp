#include <iostream>
#include <string>

class Student{
private:
    std::string m_name;
    int m_age;

public:
    Student();
    Student(const std::string &name,int age):m_name(name),m_age(age){};

    friend std::ostream& operator << (std::ostream& os,const Student& stu);

};

std::ostream& operator << (std::ostream& os, const Student& stu){
        os << stu.m_name << std::endl;
        os << stu.m_age << std::endl;
        return os;
    }

int main(){

    Student A("changlin",25);
    std::cout << A <<std::endl;

    return 0;    
}