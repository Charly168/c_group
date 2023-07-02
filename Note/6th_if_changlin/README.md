# Summery
In this capter we have learn IF statment,Logical operators, cctype library,conditional operator, conditional opereator, switch statement, continue and break statements.Finaly we learn how to create a file and read document. The prvious chapter show FOR/WHILE-Lopp in which a program decides whether to continue looping. This chapter inverstigates how C++ lwts you use branching statements to decide among alternative actions. 

## IF statement and switch statement 
- if statements has some strcture like if-else, if-(if-else)-else, or if-else if-esle. I think most of you have learned the basic logic of them, I just give a sample example:
```C++

int main(){
    using namespace std;
    cout << "This program may reformat your bad disk \n"
        "and destroy all your data.\n"
        "Do you wish to contine?<y/n>";
    
    char ch;
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
        cout << "You were warned! \a\a\n";
    else if (ch =='n' || ch == 'N')
        cout << "A wise chioce ... bye\n";
    else
    cout << "That wasn't a y or n! Apparently you"
        "can't follow\n instrctions,so"
        "I'll trashp your disk anyway.\a\a\a\n";


    if (ch == 'y' || ch == 'Y'){
        cout << "You were warned! \a\a\n";
        if (ch =='n' || ch == 'N')
        cout << "A wise chioce ... bye\n";}
    else
    cout << "That wasn't a y or n! Apparently you"
        "can't follow\n instrctions,so"
        "I'll trashp your disk anyway.\a\a\a\n";
    return 0;
}

```
As you can see, in this example we have used logical operations **||**, **if-else if-else**,**if-if*else**. The program reads just one character, so only the first character in the reponse matters. That means the user could have input **NO!** instead of **N**. The programm would juse read the **N**. But if the program trid to read more input later, it would start at the **O**. And we will talk about it at the end of today.

So, what is exactly **Switch** is? It is very same as **if** statement. But only the different is that, **IF** statement can search a range of condition. But swtich can only deal a certainly situation. Yes you can extend an *if else if else* sequence to handle fice alternaties, but C++ *switch* statement more easily handles selecting a chioce from an extended list. 

The basic expression is:
```C++
switch(inter-expression)
{
    case label 1: statement(s)
    case label 2: statement(s)
    ...
    default     : statement(s)
}
```
Example:
```C++
#include <iostream>
using namespace std;
void showmenu();
// function prototypes
void report();
void comfort();
int main()
{
    showmenu();
    int choice;
    cin >> choice;
    while (choice != 5)
    {
        switch(choice)
        {
        case 1 :
                cout << "\a\n";
                break;
        case 2 :
                report();
                break;
        case 3 :
                cout << "The boss was in all day.\n";
                break;
        case 4 :
                comfort();
                break;
        default :
                cout << "That's not a choice.\n";
        }
        showmenu();
        cin >> choice;
    }
    cout << "Bye!\n";
    return 0;
}
void showmenu()
{
    cout << "Please enter 1, 2, 3, 4, or 5:\n"
            "1) alarm
             2) report\n"
            "3) alibi
            4) comfort\n"
            "5) quit\n";
}
void report()
{
    cout << "It's been an excellent week for business.\n"
    "Sales are up 120%. Expenses are down 35%.\n";
}
void comfort()
{
    cout << "Your employees think you are the finest CEO\n"
    "in the industry. The board of directors think\n"
    "you are the finest CEO in the industry.\n";
}
```
Note that input has to be an integer for this program to work correctly. If, for example, you enter a letter, the input statement will fail, and the loop will cycle endlessly ubtil you kill the programm. To deal with those who don't follow instrchtions, it's better to use chacter input. just like *char ch*, and simultaneously you change *case 1* to *case '1'* or something others. 

- NOTE
    In the course in example *6.13* we have talked about another situation. You can also 
    And you could use code similar to skip the wrong and illegal inputs. 
    ```C++
    if(!cin){

        cin.clear();
        cin.get();
    }
    ```
    Use *cin.clear()* to clear the alarming hint, use *cin.get()* to skip next character in the input stream. Please remember, just **one** charater. 

    And we alway use *cin.get()* in a *while/loop* to skip all the unexpectant input in input stream. Like:
    ```C++
    int i
        while(!(cin>>golf[i])){
            cin.clear();
            while(cin.get() != '\n')
                continue;
        }
    ```
    If the user enters **88**, the cin expression is *true*, and a value is placed in the array. Furthermore, because *cin* is *true*, the expession *!(cin >> golf[i])* is false, and thie *inner loop* terminates. But if the user enter **must i?**, the cin expression is *false*, nothing is placed into the array, the expression *!(cin >> golf[i])* is true, and the program enters the inner while loop. The first statement in the loop uses the *clear()* method to reset input. If you omit this statement,the programm refused to read any more input. Next program uses *cin.get()* in a *while loop* to read the remaining input through the end of the line. This gets rid of the bad input, along with anything else on the line.

## cctype library
C++ provides some functions to easily jugment an input, and returns as type *bool*. Using these dunctions is more convenient than using the AND and OR operations. 
For example:
    isalpha(),isdigits(),ispunct(),isspavce(),issuper(),islower()

## continue and break statements
The *break* and *continue* statements enable a program to skip over parts of the code. You can use the *break* statement in a *switch* stament and in any of the *loops*. It causes rogram execution to pass the next statement following the *switch* or the loop. The *continue* statement is used in *loops* and causes a program to skip the rest of the body od the loop and then start a new loop cycle. 
```C++
// jump.cpp -- using continue and break
#include <iostream>
const int ArSize = 80;
int main()
{
using namespace std;
char line[ArSize];
int spaces = 0;
cout << "Enter a line of text:\n";
cin.get(line, ArSize);
cout << "Complete line:\n" << line << endl;
cout << "Line through first period:\n";
for (int i = 0; line[i] != '\0'; i++)
{
    cout << line[i];
    // display character
    if (line[i] == '.') // quit if it's a period
    break;
    if (line[i] != ' ') // skip rest of loop
    continue;
    spaces++;
}
cout << "\n" << spaces << " spaces\n";
cout << "Done.\n";
return 0;
}
```

## create a file and read document
We use head document <fstream> to allow user use **ofstream** and **ifstream** to create *outFile* and *inFile*. **ofstream** and **ifstream** are something like Datatype *int* or *string* or *double* or *float* or others anyway. And *outFile* and *inFile* like a *class*, *outFile.open()* and *inFile.open()* are function.

```C++
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
```
In this example we use *ofstream outFile* to open a file and use *ifstream inFile* to set a class type. Then use *.open()* create or open a file. We can also use *ofstream outFile(path)* or *ifstream inFile(path)*. Use *outFile << str*  to enter text content into afile, and then use *infile >> str* to accept text content. But remenber, **after open please close* to protext document. 

```C++
//     if(inFile.is_open()){
//         string str;
//         // while(inFile >> str){
//         //     cout << str << endl;
//         // }

//         while(getline(inFile,str)){
//             cout << str <<endl;
//         }
//     }
//     else{
//         cout << "File not open success!" <<endl;
//     }

```

## A supplement to cin
- cin
    1. skip space or enter...
    2. read until space
    3. do not skip space in the end
    4. return an object   can concat.
```C++
    int i;
    char ch;
    string s;
    (cin >> i).get();
    cout << i << endl;
    getline(cin, s);
    cout << s << endl;
```

- cin.get(ch)
    1. return object    can concat
    2. char -> ch
    3. if bool 
    4. read one letter each time
```C++
    char ch;
    while(cin.get(ch))
    {
        cout << ch << endl;
    }
```

- cin.get()
    1. return a char not an object   no concat
    2. meet eof  return -1
    3. read one letter each time
    char ch;
```C++
    char ch;
    while ((ch = cin.get()) != EOF)
    {
        cout << ch << endl;
    }
```

- cin.get(name, n, (terminate))
    1. return an object  can concat.
    2. read a string not a letter
    3. do not skip space or enter
```C++
    char ch[10];
    int i;
    string s;
    cin.get(ch, 10).get();
    cout << ch << endl;
    cin >> i;
    cout << i << endl;
    getline(cin, s);
    cout << s << endl;
```

- getline(cin, string)
    1. read a line
    2. skip space or enter...
    3. string
```C+
    string s;
    char arr[10];
    // getline(cin, s);
    cin >> arr;
    char ch;
    ch = cin.get();
    cout << ch << endl;
    return 0;
```



