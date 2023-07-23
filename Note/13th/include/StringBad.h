# pragma  
#include <iostream>

class StringBad{
private:
    char *m_str;
    int m_len;
    static int num_string;

public:
    StringBad();
    StringBad(const char *str);
    ~StringBad();
    StringBad(const StringBad &);

    StringBad & operator = (const StringBad &);

    friend  std::ostream & operator << ( std::ostream & os,const StringBad& obj);
    friend void callme1(StringBad & obj);
    friend void callme2(StringBad  obj);

};


