#include <iostream>
#include <cstring>

class StringBad{
private:
    char *str;

public:
    StringBad();
    StringBad(const char *s){
        str = new char[std::strlen(s) + 1] ;
        std::strcpy(str,s);
    }

    friend std::ostream& operator << (std::ostream& os, const StringBad& sb);

    ~StringBad(){
        delete [] str;
    }
};
std::ostream& operator << (std::ostream& os, const StringBad& sb){
    os << sb.str;
    return os;  
};

int main(){

    StringBad sb("Hallo World");
    std::cout << sb << std::endl;


    return 0;
}