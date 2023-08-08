// #include <iostream>
// #include <vector>

// int main() {
//     std::vector<int> numbers = {1, 2, 3, 4, 5, 6};

//     // 删除元素 3
//     // numbers.erase(numbers.begin() + 2);

//     // 删除元素范围 [1, 4)
//     numbers.erase(numbers.begin() + 1, numbers.begin() + 4);

//     // 输出剩余的元素
//     for (int num : numbers) {
//         std::cout << num << " ";
//     }

//     return 0;
// }


// #include <iostream>
// #include <vector>
// #include <algorithm>

// int main() {
//     std::vector<int> numbers = {1, 2, 2, 3, 3, 4, 5, 5, 5, 6};

//     // 使用 std::unique 去除连续重复元素
//     auto new_end = std::unique(numbers.begin(), numbers.end());

//     // 输出不重复的元素
//     for (auto it = numbers.begin(); it != new_end; ++it) {
//         std::cout << *it << " ";
//     }

//     return 0;
// }


#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::vector<int>> arr_2d = {
        {-1, 2, -1}, {0, 1, -1}, {1, -1, 0}, {1, -1, 0}, {2, 0, 1}, {2, 1, 0}
    };

    // 去除连续重复子数组并删除
    arr_2d.erase(std::unique(arr_2d.begin(), arr_2d.end()), arr_2d.end());

    // 输出结果
    for (const std::vector<int>& row : arr_2d) {
        for (int value : row) {
            std::cout << value << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
