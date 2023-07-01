#include <iostream>
#include <array>
using namespace std;
int main()
{
	const int N = 3;
	array<float, N> arr;
	cout << "Please input the time you need to run 40 meter: (max: 3 times)";
	cin >> arr[0];
	cout << "Please input for the second time: ";
	cin >> arr[1];
	cout << "Please input for the last time: ";
	cin >> arr[2];

	cout << "Your reslt is: " << 1.0 * (arr[0] + arr[1] + arr[2]) / N << "s." << endl;
	return 0;
}