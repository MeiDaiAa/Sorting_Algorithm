#include "head.h"

void quick_sort(vector<int>& nums) {
	quick_sort(nums, 0, nums.size() - 1);
}

void quick_sort(vector<int>& nums, int low, int high) {
	if (low >= high)  return;

	int mid = partition(nums, low, high);
	quick_sort(nums, low, mid - 1);
	quick_sort(nums, mid + 1, high);
}

int partition(vector<int>& nums, int low, int high) {
	int target = nums[low];
	int left = low, right = high + 1;

	while (true) {
		//右指针找到小于target的值
		while (nums[--right] > target) {
			if (right == low) break;
		}
		//左指针找到大于target的值
		while (nums[++left] < target) {
			if (left == high) break;
		}
		//交换左右指针指向的元素
		if (left >= right) break;
		else swap(nums[left], nums[right]);
	}
	//此时左右指针重叠，将第一位的值与当前指针的值交换
	swap(nums[right], nums[low]);

	//此时指针左边的值都小于target， 指针右边的值都大于target

	//返回指针索引值
	return right;
}

int partition2(vector<int>& nums, int low, int high) {
    int j = low + 1;
    for (int i = j; i <= high; i++) {
        if (nums[i] < nums[high]) {
            swap(nums[i], nums[j]); // 交换后的 arr[j] 为当前最后一个小于主轴元素的元素
            j++;
        }
    }
    swap(nums[low], nums[j - 1]); // 主轴元素归位
    return j - 1;
}

