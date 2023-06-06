#include <iostream>
using namespace std;
int findIndex(char*,char);

int main(){

    char firstName[20],lastName[10],grade[]={'A','B','C','D','E','F'};
    char desLetter;
    char *p = grade;
    int age;

    cout << "What is your first name? " << endl;
    cin.getline(firstName,20);
    cout << "What is your last name? " <<endl;
    cin.get(lastName,10).get();
    cout << "What letter grade do you deserve?" <<endl;
    cin >> desLetter;

    int Index = findIndex(grade,desLetter);

    cout << "What is your age?" <<endl;
    cin >> age;

    cout << "Name:" << lastName <<"," << firstName <<endl;
    cout << "Grade: "<< p[Index+1]<<endl;
    cout << "Age: "<< age<<endl;

}

int findIndex(char *array,char target){

    for(int i=0;i<sizeof(array);i++){
        if(array[i]==target){
            return i;
        }
    };
}
