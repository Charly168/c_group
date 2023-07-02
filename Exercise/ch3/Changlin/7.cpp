#include <iostream>

int main()
{
	using namespace std;
	cout << "Please input the gasoline consumption per kilometer in liter(liter/kilo): ";
	float gas_cost_euro;
	cin >> gas_cost_euro;
	cout << "in mpg: " << 62.14 / (gas_cost_euro / 3.875) << "mpg";

	return 0;
}