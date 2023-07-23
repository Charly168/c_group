#include <iostream>
#include "gun.h"

Gun::Gun(){
    this->name = "AK47";
    this->bullet_num = 10;
}

void Gun::fill_bullet(int num){
    this->bullet_num = this->bullet_num + num;
}

void Gun::shot(){
    this->bullet_num --;
}

void Gun::check(){
    std::cout << this->bullet_num<<std::endl;
}