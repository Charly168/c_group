#include <iostream>

// template <typename T>
// void Add(T i, T j)
// {
//     void add(int i, int j);
//     add(i, j);
// }


// // template void Swap<int>(int&, int&);

// int main()
// {
//     using namespace std;

//     int i = 0;
//     int j = 1;
//     Add(i, j);
//     cout << i << endl;
//     cout << j << endl;  
//     return 0;
// }

// void add(int i, int j)
// {
//     using namespace std;
//     cout << i + j << endl;
// }

template<typename T>
void add(T a, T b);

inline double test(){return 0;}

int main()
{
    int i = 0;
    int j = 1;
    add(1.0, 2.0);
    return 0;
}

template<typename T>
void add(T a, T b)
{
    using namespace std;
    double x;
    decltype(a + b) ab;
    ab = 1 + 2;
    cout << sizeof(ab) << endl;
}