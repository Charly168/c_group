#include <iostream>
const int N = 10;
int input(float[]);
void show(float[], int);
float average(float[], int);

//int main()
//{
//	using namespace std;
//	float golf[N];
//	cout << "Please input the result: (enter a negative result to end in advance, max: 10)\n";
//	int n = input(golf);
//	cout << "The results are shown below: \n";
//	show(golf, n);
//	cout << "The average result is: " << average(golf, n) << endl;
//	return 0;
//}

int input(float arr[])
{
	using namespace std;
	int i = 0;
	cout << "Enter the first result: ";
	cin >> arr[i];
	while (arr[i] >= 0)
	{
		cout << "Enter the next result: ";
		i++;
		if (i == N)
			break;
		cin >> arr[i];
	}
	cout << "Enter finished.\n";
	return i;
}

void show(float arr[], int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
		cout << "Result " << i << " is: " << arr[i] << endl;
	cout << "Finished.\n";
}

float average(float arr[], int n)
{
	float sum = 0.0f;
	for (int i = 0; i < n; i++)
		sum += arr[i];
	return sum / n;
}