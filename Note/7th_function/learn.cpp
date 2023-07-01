// #include <iostream>


// using namespace std;
// int main(){
    
//     char arr[20] = "Array of chars";
//     char(* q)[20]; 

//     q = &arr; 

//     cout << *(q+1) << endl; 
// }

// While的循环,not suitable for complex task
// recursive is sometimes better, it like to set a point to stop here, and finally return here to continue. 

// double ned(double);
// int ted(int);
// double (*pf)(int);
// pf  = ted;

#include <iostream>

int fun(int * ,int n);
using namespace std;

int main(){

    int size = 11;
    int arr[size] = {1,2,3,4,5,6};
    int *pr = arr;

    *pr = fun(arr,1);

    cout << pr[1] <<endl;

    return 0;
}

int  fun(int *p,int n){

    p[n] += 1; 

    return *p;

}


// #include <iostream>
// #include <cstring>
// using namespace std;

// struct Student {
//     char name[50];
//     int age;
// };

// void change(struct Student *stu){
    
//     strcpy(stu->name,"lisa");
//     stu->age = 28;
    
// }

// int main(){

//     struct Student stu1 = {"Yichen",26};
//     change(stu1);
//     cout << stu1.age << endl;
//     cout << stu1.name <<endl;
// }