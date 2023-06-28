#include <iostream>
#include <string>
struct donation
{	
	std::string name;
	double amount;
};
//int main()
//{
//	using namespace std;
//	int n;
//	cout << "Please input the number of the patrons: ";
//	while (!(cin >> n))
//	{
//		cin.clear();
//		while (cin.get() != '\n')
//			continue;
//		cout << "Please input a number: ";
//	}
//	donation* d = new donation[n];
//	for (int i = 0; i < n; i++)
//	{
//		cout << "name of patron " << i << ": ";
//		cin.get();
//		getline(cin, d[i].name);
//		cout << "amount: ";
//		while (!(cin >> d[i].amount))
//		{
//			cin.clear();
//			while (cin.get() != '\n')
//				continue;
//			cout << "Please input a number: ";
//		}
//	}
//
//	int count = 0;
//	cout << "Grand Patrons: " << endl;
//	for (int i = 0; i < n; i++)
//	{
//		if (d[i].amount > 10000)
//		{
//			cout << d[i].name << endl;
//			count++;
//		}
//	}
//	if (count == 0)
//		cout << "none.\n";
//
//	count = 0;
//	cout << "Patrons: " << endl;
//	for (int i = 0; i < n; i++)
//	{
//		if (d[i].amount <= 10000)
//		{
//			cout << d[i].name << endl;
//			count++;
//		}
//	}
//	if (count == 0)
//		cout << "none.\n";
//
//	delete[] d;
//	return 0;
//}