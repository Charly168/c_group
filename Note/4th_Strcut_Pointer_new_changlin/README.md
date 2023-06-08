# Sumery
## Understand the pointer from multiple angles
 - Type and length of pointer
    There are many different types of pointers, but they are the same length.From this example you will find that. The type of pointer must be the same as that of the variable
    ```C++
    #include <iostream>
    int main(){
        using namespace std;
        int m = 5;
        double n = 101;
        int* pm = &m;
        double* pn = &n;

        cout << sizeof(pm) <<endl;
        cout << sizeof(pn) <<endl;
        cout << sizeof(int) <<endl;
        cout << sizeof(double )<<endl;
    }
    ```
 - The writetype and understand of pointer: Typename* pointer =  &Variable
    Just as we have talked in the class. You can read the pointer from different formats":  char* p, char(*p)[20],char *p=&arr[0],char* p[20] 
    There are a few small points you need to be aware of:
    1. in the cass if Varible is a *array*, the name of *array* means the address of the *first element*.
    ```C++
    char arr[20] = "Flowers";
    char* p = arr; //
    cout << arr  <<endl;
    cout << p <<endl;
    ```
    here arr means a address of **first element**, so you can not use "&arr"

    2. What if you have to usw "&"
    ```C++
    char arr[20] = "Flowers";
    char* p[] = &arr; 
    cout << arr  <<endl;
    cout << p <<endl;
    ```
    here &arr means the address of **the whole array**, but you have to specify the length of the pointer, either empty or 20. Because the type of "&arr" is actually "char* [20]", you must match the types of Pointers and arrays.

    3. What if you have to use the address of the first element 
    ```C++
    char* p[] = &arr[0]
    ```

    4. What the different between char* p[20] and char(* p)[20]
    *char\* p[20]* declares an array of 20 pointer to **char**. It means **p** is an array that can hold 20 individual pointers to **char** values,
    ```C++
        int main(){
            char* p[20];
            p[1] = "pig";
            p[0] = "dog";

            cout<< p[0] <<endl;
            return 0;

        }
    ```

    *char (\*p)[20]* declares a pointer **p** to an array of 20 **char**
    ```C++
    char arr[20] = "Array of chars";
    char(* q)[20]; 

    q = &arr; 

    cout << *q << endl; 
    ```

## operation of pointer
If you dirrectly add a number to Pointer, pointer will change its direction to a "address+number" places
```C++
int main(){

    char arr[20] = "Herro";
    char* p = arr;
    cout << p[0] << endl;
    p = p + 1;
    cout << p[0] << endl;

}
```

##  a function returning a pointer and the new operator :
the "new" operation is used to dynamically allocate memory for objects or arrays. Is allows you to create objects or arrays at rentime and return a pointer to the allocated memory. But what impotant is that, you must to delete the allocated memory after that you don't use it. And it's better if you create and delete a new operation in one function.
 - For single objects:
 ```C++
    Type* ptr = new Type
 ```
this allocates memoty for a single objet of type **tpye** and return a pointer to that object. The **ptr** variable holds the address of the dynamically allocated object. You can then use **ptr** to access and manipulate the object.

 - for arrays:
```C++
Type* arr = new Type[size];
```
This allocates memory for an array of **size** objects of type **type** and returns a pointer to the first element of the array.For example:

```C++
#include <iostream>
#include <cstring>
using namespace std;
int* pointer(int);


int main(){
    int size = 5;
    int* pointer_res = pointer(size);
    for (int i=1;i<size;i++){

        cout << pointer_res[i] <<endl;
    }

    delete [] pointer_res;
    return 0;
}

int* pointer (int size){

    int* p = new int;

    for(int i = 0; i<size; i++){

        p[i] = i;
    }

    return p;
    

}
```

## Struct 
there ar multiple methods to modify the elements of a strcut in C++
- Dot anotaion
```C++
struct Person{
    string name;
    int age;
    int weight;
}

int main(){
    Person person1;
    person1.name = "Tome";
    person1.age = 22;
    person1.weght = 150;

    co
}
```


