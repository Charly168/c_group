#include <iostream>
const int strsize = 20;
struct bop
{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int pereference;
};
//int main()
//{
//	using namespace std;
//	bop b[2] = {
//		{"s b", "prof.", "sha bi", 1},
//		{"n t", "student.", "nao tan", 2}
//	};
//	cout << "Benevolent Order of Programmers Report" << endl;
//	cout << "a. display by name\t b. display by title\n"
//		<< "c. display by bopname\t d. display by preference\n"
//		<< "q. quit\n";
//	cout << "Enter your choice: ";
//	char ch;
//	int p;
//	while ((ch = cin.get()) != 'q')
//	{
//		switch (ch)
//		{
//		case 'a':
//			for (int i=0; i < 2; i++)
//			{
//				cout << b[i].fullname << endl;
//			}
//			break;
//		case 'b':
//			for (int i=0; i < 2; i++)
//			{
//				cout << b[i].title << endl;
//			}
//			break;
//		case 'c':
//			for (int i=0; i < 2; i++)
//			{
//				cout << b[i].bopname << endl;
//			}
//			break;
//		case 'd':
//			for (int i=0; i < 2; i++)
//			{
//				p = b[i].pereference;
//				if (p == 0)
//				{
//					cout << b[i].fullname << endl;
//				}
//				else if (p == 1)
//				{
//					cout << b[i].title << endl;
//				}
//				else
//				{
//					cout << b[i].bopname << endl;
//				}
//			}
//			break;
//		default:
//			cout << "Enter your choice again: ";
//			break;
//		}
//	}
//	return 0;
//}