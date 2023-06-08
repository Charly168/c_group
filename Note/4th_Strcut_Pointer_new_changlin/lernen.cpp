#include <iostream>
#include <cstring>
using namespace std;

struct inflatable{

    char name[20];
    float volume;
    double price;

    
};

char** getname(void);

int main(){

    // int m = 5;
    // double n = 5.0;
    // int* pm = &m;
    // double* pn = &n;

    // cout << sizeof(*pm) <<endl;
    // cout << sizeof(*pn) <<endl;
    // cout << sizeof(m) << sizeof(n) << endl;
    // int m = 5;
    // int* pm = new int;
    
    // cout << pm <<endl;
    // *pm = m;
    // cout << pm <<endl;
    // cout << *pm << endl;
    


    // double* p = new double[3];
    // p[0] = 1.0;
    // p[1] = 2.0;
    // p[2] = 3;

    // cout << p[0] << endl;

    // double wages[] = {100,1200,3000};
    // double* p = wages;

    // cout << p[1] <<endl;
    // cout << *(wages) <<endl;
    // cout << p << endl;
    // cout << *(p+1) <<endl;

    // p = p +1;
    // cout << p[0] <<endl;
    // cout << p << endl;
    // cout <<endl;

    //这里可以这样理解,*()就是取值,等价于name[]
    //*(p+1)是地址位+1,等价于arrayname[0+1],不过意义不太一样

    //PROBLEM
    // cout << *(wages+1) << endl;
    // //我感觉此处可以理解为wages是一个指针类型或地址,所以理解*wages为取地址的值
    // //也可以理解为*p 为一个 double类型,指向double类型的指针,而P为指针类型
    // //像*wages + 1 就不行,这样就只能理解为取值+1.*为解引用
    //PROBLEM
    // short tell[10];
    // cout << tell <<endl;
    // cout << &tell +2 << endl;//?
    // cout << &tell <<endl;


    // char flower[10] = "rose";
    // cout << flower << "s are red\n";
    // char* p = flower;
    // cout << p<<endl;
    // cout << p[0]<<endl;
    // cout << flower <<endl;
    // cout << &flower <<endl;
    // cout << (int*)flower <<endl;



    // char flower[10] = {'r','o','s','e'};
    // char * p = flower;
    // cout << p <<endl;
    // cout << (int*) flower << endl;
    // cout << (double*)flower <<endl;
    // cout << (char*) flower <<endl;
    // cout << (int*)p <<endl;
    // cout << (int*) p<< endl;
    // cout << *(flower+1) <<endl;
    // cout << flower[1] <<endl;
    


    // char animal[20] = "bear";
    // const char * bird = "wren";
    // char* ps;

    // cout << "Enter a kind of animal: "<<endl;
    // ps = animal;
    // cout << ps<<endl;

    // //PROBLEM
    // cout << &ps << endl;
    // cout << animal << " at " << (int *) animal<<endl; //不太理解这里的(int*)
    // //因为  animal本身已经是地址来,* anmial顶多就是接引的作用,(int*)为啥就是地址了
    // // 这里应该区别前面的ps = (int*) 0x100001 这个

    // cout << ps << " at " << (int*)ps<< endl;
    // cout << sizeof(animal) << endl;

    // char food[20] = "carrots";
    // strcpy(food,"flan");
    // cout << food <<endl;

    // inflatable* ps = new inflatable;
    // cout << "Enter name of inflatable item: "<<endl;
    // cin.get(ps->name,20);
    // cout << "Enter volume in cubic feet: " <<endl;
    // cin >> (*ps).volume;
    // cout << "Enter price: $ ";
    // // PROBLEM
    // // cin >>ps->price;
    // cin >> (*ps).price;
    // cout << "Name: "<<endl;
    // cout << "Volume: " <<ps->volume << " cubic feet\n";
    // cout << "Price: $ "<<ps->price <<endl;
    // delete ps;

    // inflatable* ps = new inflatable;
    // cout << "Enter name of inflatable item: "<<endl;
    // cin.get(ps->name,20);
    // cout << "Enter volume in cubic feet: " <<endl;
    // cin >> (*ps).volume;
    // cout << "Enter price: $ ";
    // // PROBLEM
    // // cin >>ps->price;
    // cin >> (*ps).price;
    // cout << "Name: "<<endl;
    // cout << "Volume: " <<ps->volume << " cubic feet\n";
    // cout << "Price: $ "<<ps->price <<endl;
    // delete ps;



    char arr[80] = {'0'};  // 声明一个包含80个字符的数组

    char (*pn)[80];  // 声明一个指向包含80个字符的数组的指针

    pn = &arr;  // 将 pn 指向 arr 数组
    cout << pn<<endl;
    cout << arr;

    //通过 pn 指针访问数组中的元素
    *(arr) = 'H';
    // // arr[0] = 'H';
    // // (*pn)[0] = 'H';
    // // pn[0][0] = 'H';
    // (*pn)[1] = 'e';
    // (*pn)[2] = 'l';
    // (*pn)[3] = 'l';
    // (*pn)[4] = 'o';

    // cout << *pn <<endl;


    // //这里的初始化方式区别于动态数组元素分配,动态数组的时候,这种赋值是合法的
    // // double* p = new double[3];
    // // p[0] = 1.0;
    // // p[1] = 2.0;
    // // p[2] = 3;

    // // cout << p[0] << endl;

    // //输出数组中的字符
    // printf("%c\n", (*pn)[0]);  // 输出 'H'
    // // printf("%c\n", pn[0]);  // 输出 'H'
    // printf("%c\n", (*pn)[1]);  // 输出 'e'
    // printf("%c\n", (*pn)[2]);  // 输出 'l'
    // printf("%c\n", (*pn)[3]);  // 输出 'l'
    // printf("%c\n", (*pn)[4]);  // 输出 'o'



    // char *pn[80];  // 声明一个包含80个指向字符的指针的数组
    // //指针数组就可以这样赋值
    // pn[0] = "Hello";  // 第一个元素指向字符串 "Hello"
    // pn[1] = "World";  // 第二个元素指向字符串 "World"

    // // 输出数组中的字符串
    // printf("%s\n", pn[0]);  // 输出 "Hello"
    // printf("%s\n", pn[1]);  // 输出 "World"

    //上面这个例子区别于两点,一是(*p)[]与*p[80]的区别,二是动态指针与一般指针赋值的区别

    // char **name;
    // name = getname();

    // cout << name <<endl;

    return 0;
}  

// char* getname(){



//     char * pn = new char[20];

//     cin.getline(pn, 20);//这时候返回就不能是*pn,因为*pn是一个值而不是指针,我么的函数定义为char*返回指针类型


//     return pn;
//     // return *pn;  如果这里不是new动态内存,则返回pn也是错的,因为它的作用域仅限于函数内部。当函数执行完毕后，
//     //这个数组会被销毁，所以返回指向它的指针是不安全的，因为在函数外部无法访问已销毁的内存。
    
// }


//指向指针数组的指针
// char** getname(){

//     char arr[80];
//     char** pn = new char*[2];
//     for(int i=0;i<2;i++){
//         // pn[i] = &arr;
//         pn[i] = new char[strlen(arr)+1];
//         cout << "Enter last name: "<<endl;
//         cin.getline(pn[i],20);

//     };

//     return pn;
//     // return *pn;
//     // return pn[1];
    
// }

