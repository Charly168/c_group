#ifndef GUN_H
#define GUN_H
#include <iostream>



class Gun{

private:
    int bullet_num;

public:
    std::string name;
    Gun();
    void fill_bullet(int num);
    void shot();
    void check();

};

#endif