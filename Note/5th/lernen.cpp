#include <iostream>
#include <fstream>
#include <sstream>
#include <string>


int main(){

    using namespace std;
    // cout << "Enter the starting countdown value: ";
    // int limit;
    // cin >> limit;
    // int i;
    // for(i=limit;i>0;i--){
    //     cout << "i = " << i << "\n";
    // }
    // cout << "Done now that i = " << i << "\n";

    // int i = 1;
    // while (++i < 10)
    // {
    //     cout << i;
    // }
    
    // int x[4]  = {1,2,3,4};
    // int* p  = x;
    // for(int i = 0; i < sizeof(x) / sizeof(x[0]);++i){

    //     cout << p[i];
    // }


    // #TUDO problem, why x != 32.8
    // double arr[5] = {21.1,32.8,23.4,45.2,37.4};
    // double *pt = arr;
    // cout << pt << "\n";
    // double x = *pt++;

    // cout << x << endl;
    // cout << pt << endl;
    // return 0;

//     ifstream file("/home/charly/Documents/C++/c_group/Note/5th/example.txt");
//     if (!file) {

//     cout << "Failed to open the file." << endl;
//     return 1;
// }
    
//     string line;
//     int count = 0;

//     while (getline(file, line)) {
//         std::cout << line << std::endl;
//         ++count;
//     }

//     if(file.eof()){
//         cout << "The text has reached the END" <<endl;
//     }
//     else if(file.fail()){
//         cout << "Input operation failed." << endl;  
//     }

//     file.close();
    
    
    int a = 10;
    int b = 10;
    int c;

    c = a++ * 10;
    cout <<  c <<endl;// print 100
    c = ++b * 10;
    cout << c <<endl;// print 110
        
        
    return 0;

}