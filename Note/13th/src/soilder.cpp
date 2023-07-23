#include <iostream>
#include "soilder.h"
#include "gun.h"

Soilder::Soilder(){
    this->m_name = "yichen";
    this->self_num = 35;
    Gun ak;
    this->gun = ak;
    
}

void Soilder::fill_gun(){
    self_num --;
    this->gun.fill_bullet(1); 
}

void Soilder::shot(){
    this->gun.shot();
}

void Soilder::check(){
    this->gun.check();
}