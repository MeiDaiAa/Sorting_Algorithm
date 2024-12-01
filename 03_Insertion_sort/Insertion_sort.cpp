#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Insert_sort{
public:
    void operator()(vector<int>& arr){
        //将数组分为已经遍历和未遍历的两部分, 未遍历部分的第一个元素往已遍历的部分移动, 直到移动到第一个大于前一位的位置为止
        int n = arr.size();
        //设i为未遍历的数组部分的头
        for(int i = 1; i < n; ++i){
            for(int j = i; j > 0; --j){
                if(arr[j] < arr[j - 1]) swap(arr[j], arr[j - 1]);
                //如果当前位置的数已经 大于前一位, 则直接跳出
                else break;
            }
        }
    }
};