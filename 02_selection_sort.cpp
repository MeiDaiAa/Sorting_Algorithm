// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

//选择排序, 从第一位开始，假定这位是最小的，如果往后遍历到比设定最小的数还要小，就更新最小值和下标，最后将最小的下标和当前下标交换
// class Selection_sort{
// public:
//     void operator()(vector<int>& arr){
//         for(int i = 0; i < arr.size() - 1; ++i){
//             int minIdx = i;
//             for(int j = i + 1; j < arr.size(); ++j){
//                 if(arr[j] < arr[minIdx]){
//                     minIdx = j;
//                 }
//             }
//             swap(arr[minIdx], arr[i]);
//         }
//     }
// };
////时间复杂度: O(n^2)
////空间复杂度: O(1)

// //优化：双元选择排序, 同时记录最大值和最小值
// class Selection_sort{
// public:
//     void operator()(vector<int>& arr){
//         int n = arr.size();
//         if(n < 2) return; 
//         for(int i = 0; i < n / 2; ++i){
//             int minPos = i, maxPos = i;
//             for(int j = i + 1; j < n - i; ++j){
//                 if(arr[j] < arr[minPos]) minPos = j;
//                 if(arr[j] > arr[maxPos]) maxPos = j;
//             }
//             //如果最大值等于最小值表示从i开始，后面所有数都相等
//             if(maxPos == minPos) break;
//             swap(arr[minPos], arr[i]);
//             if(maxPos == i) maxPos = minPos;
//             swap(arr[maxPos], arr[n - 1 - i]);
//         }
//     }
// };

#include "head.h"

//优化：双元选择排序, 同时记录最大值和最小值
void selectin_sort(vector<int>& arr){
    int n = arr.size();
    if(n < 2) return; 
    for(int i = 0; i < n / 2; ++i){
        int minPos = i, maxPos = i;
        for(int j = i + 1; j < n - i; ++j){
            if(arr[j] < arr[minPos]) minPos = j;
            if(arr[j] > arr[maxPos]) maxPos = j;
        }
        //如果最大值等于最小值表示从i开始，后面所有数都相等
        if(maxPos == minPos) break;
        swap(arr[minPos], arr[i]);
        if(maxPos == i) maxPos = minPos;
        swap(arr[maxPos], arr[n - 1 - i]);
    }
}