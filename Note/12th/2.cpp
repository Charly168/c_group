#include <iostream>
#include <cstring>
using namespace std;

class StringBad{
public:
    void show()
{
     printf( " %s\n",this->str);
}

private:
    char *str ;

public:
    StringBad(){
    str  = nullptr;
    str = new char[4];
    strcpy(str,"C++");
    cout << str << "defalut \n";

    };
// char *str[5]
// char (*str)[6]
// char *
//char [], char arr[]

    StringBad(const char *s){
        int size = strlen(s);
        this->str = new char[size+1];
        
        this->str = new char;
        strcpy(str,s);
        cout << str << "object created\n" ;

    }
    
    StringBad(const StringBad & s){
        this->str = new char[strlen(s.str) + 1];
        strcmp(this->str,s.str);
        cout << s.str << "referenced \n";

    }

    friend  ostream & operator << (ostream& os,StringBad & obj);

    StringBad& operator= (const StringBad &s);
    ~StringBad(){
        cout << "object deleted \n";
        if(this->str != nullptr)
            // {delete [] str;
            // this->str = nullptr;}
            // delete [] this->str;
            delete this->str;
    }
};

void test(const StringBad & s){
    StringBad st2 = s;
    
    StringBad st3 = StringBad(s);
    StringBad st4 ;
    // st4 = s;
}

StringBad&  StringBad::operator  = (const StringBad & s){

        if(this->str != nullptr)
            {delete [] str;
            this->str = nullptr;}

        this->str = new char[strlen(s.str) + 1];
        strcmp(this->str,s.str);
        cout << s.str << "== called \n";

        return *this;
        
    };  
ostream& operator << (ostream& os, StringBad & s){

    os << s.str;
    return os;

}



int main(){

    StringBad st("I am a boy");
    // std::cout << st << std::endl;// 
    // StringBad st1(st);
    // test(st);
    StringBad st2("I am a girl");
    st2 = st;
    StringBad st3;

    
    
    // StringBad* st4 = new StringBad(st);


    return 0;
}

