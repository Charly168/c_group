#include <iostream>
long long factorial(int);
int main()
{
	using namespace std;
	cout << "Please enter an integer: ";
	int i;
	cin >> i;
	cout << i << "! = " << factorial(i) << endl;
	return 0;
}

long long factorial(int i)
{
	if (i == 0 || i == 1)
		return 1;
	else
		return i * factorial(i - 1);
}