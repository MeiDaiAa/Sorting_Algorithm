#include "head.h"

//普通插入排序
void inserting_sort(vector<int>& nums){
    int n = nums.size();
    for (int i = 1; i < n; ++i) {
        for (int j = i; j > 0; --j) {
            if (nums[j] < nums[j - 1]) swap(nums[j], nums[j - 1]);
            else break;
        }
    }
}
//时间复杂度：O(n^2)
//空间复杂度：O(1)


//折半插入排序
void inserting_half_sort(vector<int>& nums) {
    int n = nums.size();
    for (int i = 1; i < n; ++i) {
        int target = lower_bound(nums.begin(), nums.begin() + i, nums[i] + 1) - nums.begin();
        for (int j = i; j > target; --j) swap(nums[j], nums[j - 1]);
    }
}
//时间复杂度：O(nlogn)
//空间复杂度：O(1)

