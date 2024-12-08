#include "head.h"

// 生成随机数组
vector<int> generateRandomArray(int size, int range) {
    vector<int> arr(size);
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % range;
    }
    return arr;
}

// 验证数组是否已排序
bool isSorted(const vector<int>& nums) {
    for (size_t i = 1; i < nums.size(); ++i) {
        if (nums[i] < nums[i - 1]) return false;
    }
    return true;
}

// 打印数组
void printArray(const vector<int>& nums) {
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}

/**
*  size         测试数组大小
*  range        随机数范围
*  times        测试次数
**/
void test(int size, int range, int times, void(*sort)(vector<int>&)) {
    srand(time(NULL));
    for (int i = 0; i < times; ++i) {
        // 生成随机数组
        vector<int> randomArray = generateRandomArray(size, range);

        // 测试
        vector<int> nums = randomArray;
        cout << "Original array (Inserting_sort): "; printArray(nums);
        sort(nums);
        cout << "Sorted array (Inserting_sort): "; printArray(nums);
        //判断
        if (isSorted(nums) ){
            cout << "--------No: " << i + 1 << " Is sorted : Yes--------" << endl;
        }
        else {
            cout << "Is sorted: No" << endl;
            break;
        }
    }

    
}