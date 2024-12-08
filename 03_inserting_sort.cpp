#include "head.h"

//普通插入排序
void inserting_sort(vector<int>& nums) {
    int n = nums.size();
    for (int i = 1; i < n; ++i) {
        int target = nums[i];
        int j = i - 1;
        for (; j >= 0; --j) {
            if (target < nums[j]) nums[j + 1] = nums[j];
            else break;
        }
        nums[j + 1] = target;
    }
}
//时间复杂度：O(n^2)
//空间复杂度：O(1)


//折半插入排序
void inserting_half_sort(vector<int>& nums) {
    int n = nums.size();
    for (int i = 1; i < n; ++i) {
        int idx = lower_bound(nums.begin(), nums.begin() + i, nums[i] + 1) - nums.begin();
        
        int target = nums[i];
        int j = i - 1;
        for (; j >= idx; --j) {
            nums[j + 1] = nums[j];
        }
        nums[j + 1] = target;
    }
}
//时间复杂度：O(nlogn)
//空间复杂度：O(1)