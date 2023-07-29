#include <iostream>
#include <array>
#include <string>
const int Seasons = 4;

struct Exp
{
    double arr[Seasons];
};

const char *Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};
// function to modify array object
void fill(Exp * exp);
// function that uses array object without modifying it
void show(Exp & exp);

void show1(std::array<double,Seasons> *pa){
    for(int i=0;i<Seasons;i++){
    std::cout << (*pa)[i] ;

    }
};



int main()
{
    Exp exp;
    fill(&exp);
    show(exp);
    // std::cout << Snames[0];
    return 0;

// std::array<double, Seasons> expenses;
// expenses[0] = 1515;
// expenses[1] = 1311;
// show1(&expenses);

}



void fill(Exp * exp)
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> (*exp).arr[i];

    }
}
void show(Exp & exp)
{
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << exp.arr[i] << endl;
        total += exp.arr[i];
    }
    cout << "Total Expenses: $" << total << endl;
}

