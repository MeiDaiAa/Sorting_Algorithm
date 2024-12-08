#include "head.h"

void time_test(void(*sort)(vector<int>&)) {
	vector<int> nums;
	for (int i = 10'000; i >= 0; --i) {
		nums.push_back(i);
	}
	cout << "Origial Array: ";
	for (int i = 0; i < 10; ++i) cout << nums[i] << ' ';
	cout << "... ... ";
	for (int i = 10; i > 0; --i) cout << nums[nums.size() - i] << ' ';
	cout << endl;


	//记录开始时间
	clock_t start = clock();
	sort(nums);
	//记录结束时间
	clock_t end = clock();
	//计算使用时间
	clock_t time_used = (double)end - start;

	cout << "Sorted Array: ";
	for (int i = 0; i < 10; ++i) cout << nums[i] << ' ';
	cout << "... ... ";
	for (int i = 10; i > 0; --i) cout << nums[nums.size() - i] << ' ';
	cout << endl;

	//判断
	if (isSorted(nums)) {
		cout << " ---------Is sorted : Yes--------" << endl;
		cout << " ---------Used Time: " << time_used << " ms--------" << endl;
	}
	else {
		cout << "Is sorted: No" << endl;
	}
}