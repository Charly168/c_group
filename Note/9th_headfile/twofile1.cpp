#include <iostream>
// to be compiled with two file2.cpp
int tom = 3;
// external variable definition
int dick = 30;
// external variable definition
static int harry = 300; // static, internal linkage
// function prototype

int main()
{
using namespace std;
cout << "main() reports the following addresses:\n";
cout << &tom << " = &tom, " << &dick << " = &dick, ";
cout << &harry << " = &harry\n";
return 0;
}
