#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <Windows.h>

using namespace std;

//冒泡排序
void bubble_sort(vector<int>&var);

//选择排序
void selectin_sort(vector<int>& arr);

//插入排序
void inserting_sort(vector<int>& nums);

//折半插入排序
void inserting_half_sort(vector<int>& nums);

//希尔排序
void shell_sort(vector<int>& nums);

//归并排序
void merge_sort(vector<int>& nums);
void merge_sort(vector<int>& nums, vector<int>& tempArr, int low, int high);
void merge(vector<int>& nums, vector<int>& tempArr, int low, int mid, int high);

//快速排序
void quick_sort(vector<int>& nums);
void quick_sort(vector<int>& nums, int low, int high);
int partition(vector<int>& nums, int low, int high);
int partition2(vector<int>& nums, int low, int high);

//***********************验证算法

// 生成随机数组
vector<int> generateRandomArray(int size, int range);

// 验证数组是否已排序
bool isSorted(const vector<int>& nums);

// 打印数组
void printArray(const vector<int>& nums);

/**测试主函数
*  size         测试数组大小
*  range        随机数范围
**/
void test(int size, int range, int times, void(*sort)(vector<int>&));

/*测试排序算法的性能
* 
*/
void time_test(void(*sort)(vector<int>&));
