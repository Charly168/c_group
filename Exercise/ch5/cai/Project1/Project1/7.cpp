#include <iostream>
#include <string>
using namespace std;
struct car
{
	string name;
	int year;
};
//int main()
//{
//	int n;
//	cout << "How many cars do you wish to catalog? ";
//	(cin >> n).get();
//	car* p = new car[n];
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Car #" << i + 1 << ":\n";
//		cout << "Please enter the make: ";
//		getline(cin, p[i].name);
//		cout << "Please enter the year made: ";
//		(cin >> p[i].year).get();
//	}
//	cout << "Here is your collection: " << endl;
//	for (int i = 0; i < n; i++)
//	{
//		cout << p[i].year << " " << p[i].name << endl;
//	}
//	delete[] p;
//	return 0;
//}