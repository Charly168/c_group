#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> children = {1,2,4,2,6};
std::vector<int> cookies = {1,4,3,2,5};

int count(std::vector<int> &children, std::vector<int> &cookies);

int main(){

    int num;
    num = count(children,cookies);
    std::cout << num << std::endl;

    return 0;
}

int count(std::vector<int> &children, std::vector<int> &cookies){

    std::sort(children.begin(),children.end());
    std::sort(cookies.begin(),cookies.end());
    int child = 0;
    int cookie = 0;
    while(child<children.size() && cookie<cookies.size()){
        if(children[child] <= cookies[cookie]) child ++;
        cookie ++;
    }

    return child;
}
