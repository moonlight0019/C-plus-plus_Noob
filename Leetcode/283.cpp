#include <vector>
#include <iostream>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int last = 0;  // `last` 用于指示下一个非零元素的目标位置

    // 遍历数组
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            // 将非零元素放到 `last` 位置
            swap(nums[i], nums[last]);
            last++;  // 移动 `last` 到下一个位置
        }
    }

    // 输出数组（可选）
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}

int main(){
    vector<int> nums = {1,2,3,4,5,0};
    moveZeroes(nums);
    return 0;
}