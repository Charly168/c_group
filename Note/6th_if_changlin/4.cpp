#include <iostream>
#include <fstream>
#include <string>
using namespace std;

ofstream outFile;
ifstream inFile;

const string name = "123456.txt";

int main(){
    outFile.open(name);

    string str = "ssfsfs";

    outFile << str;

    outFile.close();

    inFile.open(name);
    while(inFile.good()){
        inFile >> str;
        cout << str;
    }
    inFile.close();



    
    


    return 0 ;
}