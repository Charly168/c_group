// // 1.fun return 
// // 2. params char, string`
// // 3. char , string
// // 4. struct as param
// // 5. function pointer >> pointer of function pointer (pointer > pointer > pointer)


// // # include <iostream>

// // using namespace std;

// // double fun1(double arr[],int a){

// //     cout<< arr <<endl;

// //     return arr[0]; 
// // }

// // int main(){

// //     double (* pa)(double arr[],int) = fun1;

// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;
// // int fun1 (int*);
// // int main(){

// //     int arr[3] = {1,2,3};


// //     p = fun1(arr);

// //     cout << p <<endl;


// //     cout << *p<<endl;

// //     return 0 ;
// // }

// // int fun1(int arr[]){
    
// //     return arr[0];
// // }



// // #include <iostream>
// // #include <cstring>

// // using namespace std;

// // void fun1(string *str){


// //     cout << *str <<endl;
// //     // str->at(0) = '0';
// //     // (*str)[0] = '0';
// //     // str->append('0');
    
// // }
// // int main(){

// //     string str = "sddd";
    
// //     fun1(&str);

// //     cout << str <<endl;

// //     return 0 ;
// // }



// // #include <iostream>
// // #include <cstring>

// // using namespace std;
// // struct Student {

// //     string name;
// //     int age;

// // };

// // void chagename(Student *stu){
// //     stu->name = "Yichen";
// //     stu->age = 20;
// // }

// // int main(){

// //     Student stu1 = {"changlin", 18};
// //     chagename(&stu1);
// //     cout << stu1.age<<endl;

// //     return 0;
// // }





// #include <iostream>
// #include <cstring>
// #include <cctype>
// #include <cmath>
// #include <fstream>
// #include <vector>
// #include <array>


// using namespace std;

// double *func1 (double *);
// double *func2 (double *);

// double *func3 (double *);

// double func4(double*);
// typedef double * (*pf[3])(double *) ;

// int main(){
//     rename;

    
//     double arr[] = {112,6516,61};
//     // double * (*pf[3])(double *) = {func1,func2,func3};
//     pf p1  = {func1,func2,func3}; // *p[3], (*p)[3]

//     // [pf[0],pf[1],pf[2]     ]
//     // 
//     // double *     (*(*pd)[3])(double *)  =   &pf;

//     // cout <<  *pf[1](arr) <<endl;// *p[3], p[0]
//     // cout << *(*pd)[0](arr);

//     // double (*pf4)(double *) = func4; ///1.type
//     // double * func(double*); //2.type

// }

// double *func1 (double arr[]){

//     return arr;
// }
// double *func2 (double arr[]){

//     return arr;
// }

// double *func3 (double arr[]){

//     return arr;
// }

// double func4 (double arr[]){

//     return arr[0];
// }











