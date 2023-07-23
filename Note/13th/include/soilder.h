#ifndef SOILDER_H
#define SOILDER_H
#include <iostream>
#include "gun.h"

class Soilder
{
    
private:
    int self_num;
    Gun gun;


public:
    std::string m_name;
    Soilder();
    void fill_gun();
    void shot();
    void check();
};

#endif