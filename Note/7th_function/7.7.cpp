#include <iostream>
using namespace std;

double *fill_array(double ar[],int len);
void show_array(const double ar[], double *n); // don't change data
void revalue(double r, double ar[], double *p);
int Max = 20;
int main()
{
    
    double properties[Max];
    double *p = fill_array(properties, Max);
    show_array(properties, p);
    if ((p-properties) > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))
        // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, p);
        show_array(properties, p);
        
    }
    cout << "Done.\n";
    cin.get();
    cin.get();
    return 0;
}
double *fill_array(double ar[],int len){
    
    double temp;
    double *p = ar;
    cin >> temp;
    for(int i=0;i<len;i++){
        if(!cin){
            cin.clear();
            while (cin.get() != '\n')
            {
                continue;
                }
            break;
        }

        if(temp<0){break;}
        ar[i] = temp;
        p++;
        cin >> temp;
    }
    return p;

}

// the following function can use, but not alter,
// the array whose address is ar
void show_array(const double ar[], double *p)
{
    const double *pi = ar;
    using namespace std;
    for (pi; pi < p; pi++)
    {
        cout << "Property #" << (pi - ar + 1) << ": $";
        cout << *pi << endl;
    }
}
// multiplies each element of ar[] by r
void revalue(double r, double ar[], double *p)
{
     double *pi = ar;
    using namespace std;
    for (pi; pi < p; pi++)
    {
        *pi *= r ;
    }
}