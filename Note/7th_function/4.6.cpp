#include <iostream>
#include <string>
int const N_MONTH = 12;
int main()
{
	using namespace std;
	string arr[N_MONTH] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
    char *ch[N_MONTH] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
	int sales[N_MONTH];
	for(int i=0;i<N_MONTH;i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
