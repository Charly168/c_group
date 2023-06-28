#include <iostream>
#include <array>

//int main()
//{
//	using namespace std;
//	array<double, 10> donation;
//	int count = 0; 
//	double sum = 0;
//	cout << "Please input the donation: (Max 10 times, stop when the input is not a number)" << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "donation " << i << ": ";
//		cin >> donation[i];
//		if (!cin)
//		{
//			cin.clear();
//			break;
//		}
//		count++;
//		sum += donation[i];
//	}
//	sum = sum / count;
//	cout << "The average is: " << sum << endl;
//	int c = 0;
//	for (int i = 0; i < count; i++)
//	{
//		if (donation[i] > sum)
//			c++;
//	}
//	cout << c << " donations is higher than the average." << endl;
//	return 0;
//}