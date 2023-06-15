# Summery
## Supplement to what we learned last time
- Pointer to array
    ```C++
    int a[3] = {1,2,3}
    int* p = a;
    cout << *(a+1) <<endl;
    cout << *(p+1) <<endl;
    ```
    We get the same result after executing the command, because here the array name represents the address of the *first element*, and the (array name+1) means that the position is shifted by one bit.

- Understand of *pointer* with *const*
    there are three types:
    1. const int *p
        By this way, it means the direction of pointer can be changed, but the value to which the pointer points cannot change.For example:
        ```C++
        int a[3] = {1,2,3};
        int b[3] = {4,5,6};
        const int* p = a;
        cout << *p <<endl;// print 1
        *p = 7;
        cout << *p <<endl;// invaild 
        p = b;

        cout << *p <<endl;//print 4

        ```
    2. int const *p
        By this way, it means the direction of pointer cannot be changed, but the value to which the pointer points can change.For example:
        ```C++
        int a[3] = {1,2,3};
        int b[3] = {4,5,6};
        int* const p = a;
        cout << *p <<endl;// print 1
        *p = 7;
        cout << *p <<endl;// print 7
        p = b;

        cout << *p <<endl;//invaild  

        ```
    3. const int* const p
    By this way, it means the direction of pointer and the value to which the pointer points both cannot change.
## loop
-  The basic expression of FOR-loop
    ```C++
        1. 
        for (int_expr;test_expr;update_expr){
            statement;
        }
        
        2. 
        for(xx:xx){
            body;
        }

        for(&xx:xx){
            body;
        }
    ```
    In a for-loop, the *&(address notation)* is used to access elements in a container or sequence by reference. The advantage of using references is that the elements can be accessed directly *without copying*. This saves memory and improves preformance, especially when element types are lage or complex.

    Using const *auto&* ensures that the elements in the container are not modified during the loop, but only *read-only*. This is because *const auto &* represents a constant reference to the element, preventing modification of the element.

    On the other hand, if you want to modify the elements in the container in a loop, you can use *auto&* or *auto &&*. *Auto&* represents a non-constant reference to an element, allowing modification of the element.

- basic expression of while-loop:
   ```C++
    while (test-condition){
        body
    }

    // while(not zero)

    //using for reading input from the keyboard

    while(ch != #){
        ...
        ++cout;
        ...
    }
   ```
- basic expression of do-while-loop:
   ```C++
   do{
    body
   }
   while (test-expression);

   ```
## How to understand ++ 
In the preclasses we have seen a lot of expressions like this. But **++** has different meanings in different places. 
**a++** means keeping the value of a on the current command line, but after exceuting the value of *a* will be changed as *a+1*.

**++a** means before exceuting the value of *a* will be incremented by one, and keeping (a+1) on current line. For example:

```C++

int a = 10;
int b = 10;
int c;

c = a++ * 10;
cout <<  c <<endl;// print 100
c = ++b * 10;
cout << c <<endl;// print 110
```
You can understand it in a easy way: the first number is executed first.
c = a++ *10 just like c = a*10, after that a = a+1
c = ++b *10 just like c = (b+1)*10,on the current b = b+1

## relational operator with array or string 
strcmp(char arr1,char arr2) not char arr1 == char arr2  
*strcmp* is used to campare two character constants or array. The result of executing
are only in e ways. I mean **-1**, **0**, **1**.
**-1**: the ASCII of the character is smaller than another.
**0**: the ASCII of the character is the same as another.
**1**: the ASCII of the character is the biger than another.

**POINT**
So it is very important to know that, if you want to use *strcmp* in a **if--loop**
of **while-loop** as a condition. You must remenber. The result of *strcmp()* is not a bool-value but a number. So you have to set it as for example:while(!strcmp(a,b)==0)

When you want the user to end teh program by typing *end*, use it like this:
```C++
while(strcmp(a, "end") != 0)
{
    cin >> a;
    count++;
}
```

## Getchar(),putchat(),cin.get(),cout.put()
In the classs we have also dicussed the using of those types.
In C :Getchar(),putchat() are used to accept or print a INT number
IN C++: cin.get(),cout.put() are used to accept or print a CHAR character.

More than that, you show know that, cin.get(char) and "cin "can return a **Object**, but cin.get() returns a CHAR.

## set up aliasingname
#define ALIASING_NAME typename or(typename *)
or 
typedef typename aliasName



## TUDO P342
## file.eof(), file.fail(),cin.fail(),cin.eof()
```C++
while(cin.get() == False)

int ch;
ch = cin.get()
while(ch != EOF){
    cout.put(ch);
    ++count;
    ch = cin.get();
}
```
In short, *eof()*  is used to determine when a program has reached the end ('\0'), and *fail()* is used to determine then a program has stoped by outsider.

## 2D-array and for-loop
int maxtemps[4][5];
for (int row = 0;row<4,row++){
    for(int col =0;col<5,col++){
        cout<< maxtemps[row][col]<<endl;
    }
}
