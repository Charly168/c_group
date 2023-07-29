#include <iostream>
#include <cstring>
using namespace std;
const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
// getinfo() has two arguments: a pointer to the first element of
// an array of student structures and an int representing the
// number of elements of the array. The function solicits and
// stores data about students. It terminates input upon filling
// the array or upon encountering a blank line for the student
// name. The function returns the actual number of array elements
// filled.
int getinfo(student pa[], int n)
{
    student temp;
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "Please ENTER!" << endl;
        cin.get(temp.fullname,20);       
        // if (!cin)
        // {
        //     cin.clear();
        //     while (cin.get() != '\n')
        //     {

        //         continue;
        //     }
        //     cout << "Error" << endl;
        //     break;
        // }
        // cin >> temp.fullname;
        // cout << strlen(temp.fullname);
        bool emp = true;
        for(int i=0;i<strlen(temp.fullname);i++){
            if(temp.fullname[i]!=' '){
                emp=false;}
            
        }
        if(emp){break;}

        if (strlen(temp.fullname)==0)
        {
            cout << "Leer" << endl;
            break;
        }
        cin >> temp.hobby;
        cin >> temp.ooplevel;

        pa[i] = temp;
    }
    return i;
};
// display1() takes a student structure as an argument
// and displays its contents
void display1(student st)
{
    cout << st.fullname;
    cout << st.hobby;
    cout << st.ooplevel;
};
// display2() takes the address of student structure as an
// argument and displays the structure’s contents
void display2(const student *ps)
{
    cout << ps->fullname;
    cout << ps->hobby;
    cout << (*ps).ooplevel;
};
// display3() takes the address of the first element of an array
// of student structures and the number of array elements as
// arguments and displays the contents of the structures
void display3(const student pa[], int n)
{
    for (int i = 0; i < n; i++)
    {
        display1(pa[i]);
    }
};
int main()
{
    cout << "Enter class size : ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;
    student *ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        // display2(&ptr_stu[i]);
    }
    // display3(ptr_stu, entered);
    delete[] ptr_stu;
    cout << "Done\n";
    return 0;
}