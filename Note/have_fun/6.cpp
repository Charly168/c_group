#include <iostream>
#include <vector>
#include <algorithm>
/*
nums1 = [1, 4, 3], m = 3
nums2 = [2, 5, 6], n = 3
*/
std::vector<int> nums1 = {1, 4, 3,8,5};
std::vector<int> nums2 = {2, 5, 6};
std::vector<int> compare(std::vector<int> &nums1, std::vector<int> &nums2);

int main(){

    std::vector<int> nums3;
    nums3 = compare(nums1,nums2);
    for(int num:nums3){
        std::cout<< num << " ";
    }
    return 0;
}

std::vector<int> compare(std::vector<int> &nums1, std::vector<int> &nums2){

    std::vector<int> nums3;
    nums3.insert(nums3.end(),nums1.begin(),nums1.end());
    nums3.insert(nums3.end(),nums2.begin(),nums2.end());

    std::sort(nums3.begin(),nums3.end());
    
    return nums3;
}

