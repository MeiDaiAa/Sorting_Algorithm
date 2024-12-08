#include "head.h"


void shell_sort(vector<int>& nums) {
	int n = nums.size();
	
	//计算shell增量
	for (int gap = n / 2; gap >= 1; gap /= 2) {
		//获得每组待插入数据的起始值
		for (int start = 0; start < gap; start++) {
			//对每组待插入数据进行插入排序
			for (int i = start + gap; i < n; i += gap) {
				int target = nums[i];
				int j = i - gap;
				for (; j >= 0; j -= gap) {
					if (target < nums[j]) nums[j + gap] = nums[j];
					else break;
				}
				nums[j + gap] = target;
			}
		}
	}
}