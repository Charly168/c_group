#include <iostream>
int main()
{
	using namespace std;
	int n;
	cout << "Enter number of rows: ";
	cin >> n;
	int n_dot;
	for (int i = 1; i <= n; i++)
	{
		n_dot = n - i;
		for (int j = 0; j < n_dot; j++)
			cout << ".";
		for (int j = 0; j < i; j++)
			cout << "*";
		cout << endl;
	}
}