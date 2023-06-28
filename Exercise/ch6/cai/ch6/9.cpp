#include <iostream>
#include <fstream>
#include <string>
struct donation
{
	std::string name;
	double amount;
};
int main()
{
	using namespace std;
	cout << "Input the file name: ";
	string s;
 	getline(cin, s);
	ifstream fin;
	fin.open(s);
	if (!fin.is_open())
		exit(EXIT_FAILURE);

	int n;
	while (!(fin >> n))
	{
		fin.clear();
		while (fin.get() != '\n')
			continue;
	}
	
	donation* d = new donation[n];
	for (int i = 0; i < n; i++)
	{
		fin.get();
		getline(fin, d[i].name);
		while (!(fin >> d[i].amount))
		{
			fin.clear();
			while (fin.get() != '\n')
				continue;
		}
	}

	int count = 0;
	cout << "Grand Patrons: " << endl;
	for (int i = 0; i < n; i++)
	{
		if (d[i].amount > 10000)
		{
			cout << d[i].name << endl;
			count++;
		}
	}
	if (count == 0)
		cout << "none.\n";

	count = 0;
	cout << "Patrons: " << endl;
	for (int i = 0; i < n; i++)
	{
		if (d[i].amount <= 10000)
		{
			cout << d[i].name << endl;
			count++;
		}
	}
	if (count == 0)
		cout << "none.\n";

	delete[] d;
	return 0;
}