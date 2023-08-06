#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

std::vector<int> children = {1,2,4,2,6};
std::vector<int> cookies = {1,4,3,2,5};
int count(std::vector<int>&a,std::vector<int>&b);
int count(std::vector<int>* a,std::vector<int>* b);

int main(){
    int num;
    num = count(children,cookies);
    std::cout << num;
    return 0;


}

int count(std::vector<int>&a,std::vector<int>&b){
    int num=0;

    std::sort(a.begin(),a.end());
    std::sort(b.begin(),b.end());
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++){
            if(a[i] <= b[j]){
                b.erase(b.begin()+j);
                num++;
                break;
            }
        }
    }

    return num;
}

int count(std::vector<int>&childre,std::vector<int>&cookies){
    int num=0;

    std::sort(children.begin(),children.end());
    std::sort(cookies.begin(),cookies.end());
    int child = 0, cookie = 0;
    while(child<children.size() && cookie<cookies.size()){
        if(children[child] <= cookies[cookie]) ++child;
        ++cookie; 
    }

    return child;
}
