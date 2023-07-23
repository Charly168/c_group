#include <iostream>
#include <cstring>
#include "StringBad.h"
using std::cout;
using std::endl;

int StringBad::num_string = 0;

StringBad::StringBad(const char *str){
    m_len = strlen(str);
    m_str =  new char[m_len + 1];
    strcpy(m_str,str);
    num_string++;
    cout << num_string << "object created"<< m_str << endl;

}
//StringBad oj1;

StringBad::StringBad(){
    m_len = 4;
    m_str = new char[m_len];
    strcpy(m_str,"C++");
    num_string ++;
    cout << num_string << "object created" <<endl;
}

StringBad::StringBad(const StringBad & st){
    this->m_len = st.m_len;
    m_str = new char[m_len];
    strcpy(this->m_str,st.m_str);
    this->num_string ++;

};

StringBad & StringBad::operator = (const StringBad &st){
    this->m_len = st.m_len;
    m_str = new char[m_len];
    strcpy(this->m_str,st.m_str);
    return *this;
};



StringBad::~StringBad(){
    --num_string;

    if(m_str != nullptr)
    {       
        delete  m_str;
        m_str = nullptr;
    }    
    cout << num_string << "left" << endl;    
}

 std::ostream & operator << (  std::ostream & os,const StringBad& obj){
    os << obj.m_str;
    return os;
}