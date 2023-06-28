#include <iostream>
long double prob(unsigned n, unsigned p);

//int main()
//{
//	using namespace std;
//	cout << "You have one chance in " << prob(47, 5) << " of winning.\n";
//	return 0;
//}

long double prob(unsigned n, unsigned p)
{
	long double result = 1.0;
	unsigned i, j;
	for (i = n, j = p; p > 0; i--, p--)
		result = result * i / j;
	return result * 27;
}