// #include <iostream>
// #include <cstring>
// #include <cmath>
// int main()
// {
//     using namespace std;
//     char ruler[66];
//     int interval;
//     int n_interval;
//     ruler[0] = '|';
//     ruler[64] = '|';
//     for (int i=1; i<64; i++)
//     {
//         ruler[i] = ' ';
//     }
//     ruler[65] = '\0';
//     cout << ruler << endl;
//     for(int i=1; i<=6;i++)
//     {
//         n_interval = pow(2, i);
//         interval = 64 / n_interval;
//         int temp = 0;
//         for (int j=0; j<n_interval-1;j++)
//         {
//             temp += interval;
//             ruler[temp] = '|';
//         }
//         cout << ruler << endl;

//         for (int i=1; i<64; i++)
//         {
//             ruler[i] = ' ';
//         }
//     }

//     return 0;
// }
