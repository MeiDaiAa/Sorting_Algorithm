#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;
//插入排序
void inserting_sort(vector<int>& nums);
//折半插入排序
void inserting_half_sort(vector<int>& nums); 

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
void test(int size, int range, void(*sort)(vector<int>&));
