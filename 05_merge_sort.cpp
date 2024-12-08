#include "head.h"

void merge_sort(vector<int>& nums) {
	int n = nums.size();
	vector<int>tempArr(n);
	merge_sort(nums, tempArr, 0, n - 1);
}

//merge_sort递归方法
void merge_sort(vector<int>& nums, vector<int>&tempArr, int low, int high) {
	//非法判断&&推出条件
	if (low >= high) return;

	//将待排序数组段折半
	int mid = low + (high - low) / 2;

	//将左右两半分开排序
	merge_sort(nums, tempArr, low, mid);
	merge_sort(nums, tempArr, mid + 1, high);

	//将排序好的两端排序
	merge(nums, tempArr, low, mid, high);
}

void merge(vector<int>& nums, vector<int>& tempArr, int low, int mid, int high) {
	int p1 = low, p2 = mid + 1;
	int cur = low;

	while (p1 <= mid && p2 <= high) {
		if (nums[p1] < nums[p2]) tempArr[cur++] = nums[p1++];
		else tempArr[cur++] = nums[p2++];
	}

	//只有一个数组还有剩值
	while (p1 <= mid) tempArr[cur++] = nums[p1++];
	while (p2 <= high) tempArr[cur++] = nums[p2++];

	//将tmepArr中对应位置的值赋到nums对应的位置上面

	for (int i = low; i <= high; ++i)nums[i] = tempArr[i];
}

