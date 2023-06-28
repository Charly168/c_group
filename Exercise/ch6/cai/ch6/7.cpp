#include <iostream>
#include <cctype>
using namespace std;
//int main()
//{
//	cout << "Enter words (q to quit)\n";
//	char ch;
//	int n_v = 0;
//	int n_c = 0;
//	int n_o = 0;
//	bool s = true;
//	bool q = false;
//	while (cin.get(ch))
//	{
//		// check out
//		if (q && (ch == '\n' || ch == ' '))
//			break;
//		
//		if (s && q)
//		{
//			n_c++;
//			s = false;
//		}
//
//		if (ch == 'q')
//			q = true;
//		else
//			q = false;
//
//		if (ch == ' ' || ch == '\n')
//		{
//			s = true;
//			continue;
//		}
//		if (s)
//		{
//			if (ch == 'q')
//				continue;
//			if (isalpha(ch))
//				if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I'
//					|| ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
//				{
//					n_v++;
//				}
//				else
//					n_c++;
//			else
//				n_o++;
//			s = false;
//		}
//	}
//
//	cout << n_v << " words beginning with vowels" << endl;
//	cout << n_c << " words beginning with consnonants" << endl;
//	cout << n_o << " others" << endl;
//	return 0;
//}