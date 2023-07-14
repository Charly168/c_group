#include <iostream>
// to be compiled with two file2.cpp
int tom = 3;
// external variable definition
int dick = 30;
// external variable definition
static int harry = 300; // static, internal linkage
// function prototype
<<<<<<< HEAD
void remote_access();
=======

>>>>>>> 80ced2c1b430579fcce7be26b8adaf9e9cf34aae
int main()
{
using namespace std;
cout << "main() reports the following addresses:\n";
cout << &tom << " = &tom, " << &dick << " = &dick, ";
cout << &harry << " = &harry\n";
<<<<<<< HEAD
remote_access();
=======
>>>>>>> 80ced2c1b430579fcce7be26b8adaf9e9cf34aae
return 0;
}
