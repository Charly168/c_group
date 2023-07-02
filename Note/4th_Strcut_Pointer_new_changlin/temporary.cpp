#include <iostream>
using namespace std;

//1.多角度解读指针(类型,长度)
//2. char* p, char(*p)[20],char *p=&arr[0],char* p[20] 与取地址
//3. 指针运算与赋值(new),char(*p)[20]
//4.返回指针类型
//5.new创建动态,赋值和取值


int main(){
    
    // char arr[20] = "rose" ;
    // // char* p = &arr[0]  ;  // char*[20]
    // char* pn= arr; // char*[20]
    // // char * p;
    // // char(* pn)[20] = &arr; // char*[20]
    // // char(* pn)[30] = &arr; // char*[20]

    
    // cout << *(pn +1) << endl; //如果前面是pn[20]就会是乱码,因为指定长度了
    // cout << pn[0] <<endl;// arr[0], 
    // cout << arr[0] <<endl;
    // cout << *(arr+1) <<endl;
    // char (**pb)[20] = &pn;
    // cout << (double*)arr <<endl;
    // cout << (int)arr <<endl;
    // char* pt = &arr
 
    // int n;
    // int* pn = &n;
    // cout << pn ;

    // char* pc; 

    // int n;
    // double m;
    // int* pi=&n;
    // double* pd=&m;
    // cout << sizeof(pi);
    // cout << sizeof(pd);
    // cout << sizeof(n);
    // cout << sizeof(m);


    //赋值
    // char *pn[20];
    // pn[0] = "yichen";
    // pn[1] = "changlin";

    // char arr[20];
    // char* pt =  arr;
    // pt[0] = 'F';
    // pt[1] = 'H';
    

    // cout << pt[0];
    // char arr[80] = {};  // 声明一个包含80个字符的数组
    // char (*pn)[80];  // 声明一个指向包含80个字符的数组的指针
    // pn = &arr;  // 将 pn 指向 arr 数组
    // cout << pn<<endl;
    // cout << arr;
    // //通过 pn 指针访问数组中的元素
    // *(arr) = 'H';
    // // arr[0] = 'H';
    // // (*pn)[0] = 'H';
    // // pn[0][0] = 'H';
    // (*pn)[1] = 'e';// pn[0] ='1'
    // (*pn)[2] = 'l';
    // (*pn)[3] = 'l';
    // (*pn)[4] = 'o';
    // cout << pn[0];


    
    return 0;


}


