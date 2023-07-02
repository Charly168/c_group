#include <iostream>
#include <vector>
#include <cstring>
#include <fstream>
#include <cctype>


//example 1
// int main(){
//     using namespace std;
//     cout << "This program may reformat your bad disk \n"
//         "and destroy all your data.\n"
//         "Do you wish to contine?<y/n>";
    
//     char ch;
//     cin >> ch;
//     if (ch == 'y' || ch == 'Y')
//         cout << "You were warned! \a\a\n";
//     else if (ch =='n' || ch == 'N')
//         cout << "A wise chioce ... bye\n";
//     else
//     cout << "That wasn't a y or n! Apparently you"
//         "can't follow\n instrctions,so"
//         "I'll trashp your disk anyway.\a\a\a\n";
    

//     return 0;
// }


// const char * p[3] = {"111",
//                     "222",
//                     "333"};
// int main(){
//     using namespace std;
//     int n;
//     cin >> n;
//     int index;

//     if (n>17 && n < 35)
//         index = 0;
//     else if (n > 35 && n < 50)  
//     {
//         index = 1;
//     }
//     else
//         index = 2;

//     cout << p[index] << endl;    


// }

// int main(){
//     using namespace std;

//     int num;
//     cin >> num;

//     cout << (!num) <<endl;

// }

// int main(){
//     using namespace std;
//     int a;
//     int b;
//     cin >> a >> b;
//     string c = a > b ? "Big" : "Small";
//     // char * c ;

//     // if (a>b){
//     //     c = "Big";
//     //     cout << c;
//     // }
//     // else{
//     //     c = "small";
//     //     cout << c;
//     // }
//     cout << c << endl;

//     return 0;   
// }


// int main(){
//     using namespace std;

//     vector<string> c;

//     int a,b;
//     cin >> a >>b;

//     if(a>b){
//         c.push_back("Big");
//         cout << c[0];
//     }
//     else{
//         c.push_back("Small");
//         cout << c[0];
//     }

//     return 0;
// }

// int main(){

//     using namespace std;
//     const char x[2][20] = {"Jason ","at your service\n"};
//     const char * y = "Quillstone";

//     // for (int i = 0;i<3;i++){
//     //     cout << ((i < 2) ? !i ? x[i] : y : x[1]);
//     // }

//     // for (int i = 0; i<3;++i){
//     //     if(i < 2 ){
//     //         if (!i){
//     //             cout << x[i];
//     //         }
//     //         else {
//     //             cout << y;
//     //         }
//     //     }
//     //     else 
//     //         cout << x[1];
        
    

//     // }

//     // for (int i =0; i<3; ++i){

//     //     if (i < 2 && !i){
//     //         cout << x[i];
//     //     }
//     //     else if(i > 0 && i <2){
//     //         cout << y;
//     //     }
//     //     else{
//     //         cout << x[1];
//     //     }
//     // }

//     return 0;

// }

// int main(){
//     using namespace std;
//     int n = 0;
//     for(int i =0 ; i<4;++i){
//         ++n;
//         if(i< 2){
//             cout << "'i' small than 2. \n" ;
            
//         }
//         else 
            
//             continue;
        
//     }
//     cout << n <<endl;
// }

// 6.13
// const int Max = 5;
// int main(){
//     using namespace std;
//     double fish[Max];
//     cout << "Please enter the weights of your fish.\n";
//     cout << "You may enter up to " << Max
//         << "fish <q to terminate > .\n";
//     cout << "fish #1: ";

//     int i  =0;
//     while(i< Max && cin >> fish[i]){
//         if (++i < Max)
//             cout << "fish # "<< i+1 << ":";

//     }
//     double total = 0.0;
//     for (int j = 0;j<i; j++)
//         total += fish[j];
    
//     if(i==0)
//         cout << "No fish\n";
//     else
//         cout << total/i << " = average weight of "
//             << i << "fish\n";
//     cout << "Done.\n";

//     return 0;

// }


// const int Max = 5;
// int main(){
//     using namespace std;
//     double fish[Max];
//     cout << "Please enter the weights of your fish.\n";
//     cout << "You may enter up to " << Max
//         << "fish <q to terminate > .\n";
//     cout << "fish #1: ";

//     int i  =0;
//     // while(i< Max && cin >> fish[i]){
//     //     if (++i < Max)
//     //         cout << "fish # "<< i+1 << ".";

//     // }
//     while(i< Max ){
//         cin >> fish[i];
//         if(!cin){
//             cin.clear();
//             cout << "You have entered a false input"<<endl;
//             cin.get();
//             cout << "fish # "<<  1 << ":";
//             cin >> fish[i];
//         }
        

//         if (++i < Max)
//             cout << "fish # "<< i+1 << ".";

//     }

//     double total = 0.0;
//     for (int j = 0;j<i; j++)
//         total += fish[j];
    
//     if(i==0)
//         cout << "No fish\n";
//     else
//         cout << total/i << " = average weight of "
//             << i << "fish\n";
//     cout << "Done.\n";

//     return 0;

// }


//6.14
// const int Max = 5;
// int main(){
//     using namespace std;
//     int golf[Max];
//     cout << "Please enter your golf scorce.\n";
//     cout << "you must enter " << Max << "rounds.\n";
//     int i;
//     for (i=0;i<Max;i++){
//         cout << "round #" << i+1 << ":";
//         while(!(cin >> golf[i])){
//             cout << golf[i];
//             cin.clear();
//             // cin.get();
//             while(cin.get() != '\n')
//                 continue;
//             cout << "Please enter a number: ";

//         }
//     }

//     double total = 0.0;
//     for(i=0; i< Max;i++)
//         total += golf[i];
    
//     cout << total/Max << "= average scorce "
//         << Max << "rounds\n";
//     return 0;

// }


// int main(){

//     char n;
//     std::cin >> n;
//     std::cout << n <<"\n";
    
// }



// int main(){
//     using namespace std;
//     ofstream outFile;
//     ifstream inFile;
//     outFile.open("text.txt");

//     char ch[50] = "This is a new file.";

//     outFile << ch << endl;
//     outFile.close();

//     inFile.open("text.txt");
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



//     return 0;
// }


// int main(){
//     using namespace std;
//     int m[3] = {1,2,3};
//     int *p = m;
//     cout << *p <<endl;
//     cout << (int *) m <<endl;
//     return 0;
// }

// int main(){

//     using namespace std;

//     char ch[10];
//     cin.getline(ch,10);

//     for(int i =0;ch[i] != '\0';++i){
//         if(isalpha(ch[i]))
//             cout << "You have entered some character.\n";
//         else
//             cout << "No character.\n";
//     }


//     return 0;
// }




// using namespace std;
// struct gradeSystem{
//     string name;
//     double grade;
// };
// void showmenu();

// int main(){

//     vector <gradeSystem> *p = new vector<gradeSystem>();
//     showmenu();
//     cout << "Pleae select a number to choose function. \n";
//     int num;
//     cin >> num;
//     cin.ignore();

//     switch (num)
//     {
//     case 1 : {gradeSystem student ; 
//         getline(cin,student.name);
//         cin >> student.grade;
//         p->push_back(student);
//         break;
//     }
        
    
//     case 2: {

//         string name;
//         getline(cin,name);
//         for(int i =0;i < p->size();++i){
//             if(name == (*p)[i].name)
//                 cout << (*p)[i].grade << endl;
//         }

//         break;
//     }

//     case 3 :{
//         double sum = 0;
//         for (const gradeSystem &student : *p){
//             sum += student.grade;
//         }
//         cout << sum/p->size() << endl;
//         break;
//     }
    
//     default:
//         break;
//     }

//     delete p;
    


//     return 0;
// }

// void showmenu(){

//     cout << "Please enter 1,2,3 or other :\n"
//         "1) store name and grade        2) find grade"
//         "3) calculate average of grade";
// }



// using namespace std;

// struct gradeSystem {
//     string name;
//     double grade;
// };

// char choice();

// void showmenu();

// int main() {
//     vector<gradeSystem> p;
//     showmenu();

//     char num = choice();
//     while (num != '\0' && num != 'q'){
//         switch (num) {
//             case '1': {
//                 gradeSystem student;
//                 cout << "Pleae enter the name of student: ";
//                 getline(cin, student.name);
//                 cout << "Please enter the grade of student: ";
//                 cin >> student.grade;
//                 p.push_back(student);
//                 num = choice();
//                 break;
//             }

//             case '2': {
//                 string name;
//                 cout << "which student you want to check? ";
//                 getline(cin, name);
//                 for (int i = 0; i < p.size(); ++i) {
//                     if (name == p[i].name){
//                         cout << "The grade of " << p[i].name <<" is: ";
//                         cout << p[i].grade << endl;
//                         num = choice();
//                         break;
//                     }
//                 }
                
//             }

//             case '3': {
//                 double sum = 0;
//                 for (const gradeSystem& student : p) {
//                     sum += student.grade;
//                 }
//                 cout <<"The average of all students is: "<< sum / p.size() << endl;
//                 num = choice();
//                 break;
//             }

//             default:
//                 break;
//         }
// }
//     return 0;
// }

// void showmenu() {
//     cout << "Please enter 1, 2, 3, or other:\n"
//          << "1) store name and grade\n"
//          << "2) find grade\n"
//          << "3) calculate average of grade\n"
//          << "4) enter 'q' to terminate\n";
// }

// char choice(){
//     cout << "Please select a number to choose function. \n";
//     char num;
//     cout << "enter your choices: ";
//     cin >> num;
//     cin.ignore();

//     return num;
// }



//verbessern
// using namespace std;

// struct gradeSystem {
//     string name;
//     double grade;
// };

// char choice();
// void showmenu();
// void processchoice(char num,vector<gradeSystem> &p);

// int main() {
//     vector<gradeSystem> p;
//     showmenu();

//     char num = choice();
//     while (num != '\0' && num != 'q'){
//         processchoice(num,p);
//         num = choice();

// }
//     return 0;
// }

// void showmenu() {
//     cout << "Please enter 1, 2, 3, or other:\n"
//          << "1) store name and grade\n"
//          << "2) find grade\n"
//          << "3) calculate average of grade\n"
//          << "4) enter 'q' to terminate\n";
// }

// char choice(){
//     cout << "Please select a number to choose function. \n";
//     char num;
//     cout << "enter your choices: ";
//     cin >> num;
//     cin.ignore();

//     return num;
// }

// void processchoice(char num, vector<gradeSystem> &p){

//     switch (num) {
//     case '1': {
//         gradeSystem student;
//         cout << "Pleae enter the name of student: ";
//         getline(cin, student.name);
//         cout << "Please enter the grade of student: ";
//         cin >> student.grade;
//         p.push_back(student);
    
//         break;
//     }

//     case '2': {
//         string name;
//         cout << "which student you want to check? ";
//         getline(cin, name);
//         for (int i = 0; i < p.size(); ++i) {
//             if (name == p[i].name){
//                 cout << "The grade of " << p[i].name <<" is: ";
//                 cout << p[i].grade << endl;
//                 break;
//             }
//         }
        
//     }

//     case '3': {
//         double sum = 0;
//         for (const gradeSystem& student : p) {
//             sum += student.grade;
//         }
//         cout <<"The average of all students is: "<< sum / p.size() << endl;
//         break;
//     }

//     default:
//         break;
// }
// }



// using namespace std;
// int main(){

//     if (2>3 && (5 || 3)){
//         cout << "You are right"<<endl;
//     }
//     else    
//         cout << "You are wrong" <<endl;

//     return 0;
// }