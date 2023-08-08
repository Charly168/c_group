#include <iostream>
#include <vector>
#include <algorithm>

/*
Input:
nums = [-1, 0, 1, 2, -1, -4,2,4,3,5]

Output:
[[-1, -1, 2], [-1, 0, 1],[-1 -4 5 ],[2,-4,2]]
*/
int arr[] = {-1, 0, 1, 2, -1, -4,2,4,3,5};
std::vector<std::vector<int>> find(int*,int);

int main(){
    int length = sizeof(arr) / sizeof(arr[0]);
    std::vector<std::vector<int>> arr_2d = find(arr,length);

    for(const std::vector<int> & row : arr_2d){
        for(int value : row){
            std::cout << value << " "; 
        }
        std::cout << "\n";
    }

    return 0;
}

// std::vector<std::vector<int>> find(int* arr,int length){
//     std::vector<std::vector<int>> arr_2d;
//     int *pi1 = arr;
//     int *pi2 = arr;
//     for(int i=0;i<length-2;i++){
//         for(int j=i+2;j<length;j++){
//             if((arr[i]+pi1[i+1]+pi2[j])==0){
//                 arr_2d.push_back({arr[i],pi1[i+1],pi2[j]});
//             }
//         }   
//     }

//     return arr_2d;
// }

// std::vector<std::vector<int>> find(int* arr,int length){
//     std::vector<std::vector<int>> arr_2d;

//     for (int i = 0; i < length - 2; i++) {
//         int* pi1 = arr + i + 1; // 移动 pi1 指向 i 后的元素
//         int* pi2 = arr + i + 2; // 移动 pi2 指向 i 后的第二个元素
//         for(int k=i+1;k<length;k++){
//             for (int j = i + 2; j < length; j++) {
//                 // std::cout<< "arr[i]: " << arr[i]<<std::endl;
//                 // std::cout<< "*pi1: " << *pi1<<std::endl;
//                 // std::cout<< "*pi2: " << *pi2<<std::endl;
//                 if ((arr[i] + *pi1 + *pi2) == 0) {
//                     arr_2d.push_back({arr[i], *pi1, *pi2});
//                 }
//                 pi2++; // 移动 pi2 指针到下一个元素
//             }
//         pi1++; // 移动 pi1 指针到下一个元素
//         }

// }

//     return arr_2d;
// }

std::vector<std::vector<int>> find(int* arr, int length) {
    std::vector<std::vector<int>> arr_2d;
    for(int i =0;i<length-2;i++){
        for (int* pi1 = arr+i; pi1 < arr + length - 2; ++pi1) {
            for (int* pi2 = pi1 + 1; pi2 < arr + length; ++pi2) {
                if ((arr[i] + *pi1 + *pi2) == 0) {
                    std::vector<int> new_arr = {arr[i], *pi1, *pi2};
                    std::sort(new_arr.begin(),new_arr.end());
                    arr_2d.push_back(new_arr);
                }
            }
        }
    }

    std::sort(arr_2d.begin(),arr_2d.end());
    // std::unique(arr_2d.begin(),arr_2d.end());
    arr_2d.erase(std::unique(arr_2d.begin(),arr_2d.end()),arr_2d.end());
    return arr_2d;
}
