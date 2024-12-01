#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Bubble_sort{
public:
    //构造函数
    Bubble_sort(vector<int>var);
    //排序(自身)
    void sort();
    //排序(仿函数)
    void operator()(vector<int>& Var);
    //打印数组
    void printVar();
private:
vector<int>var;
};

Bubble_sort::Bubble_sort(vector<int>var): var(var){}

void Bubble_sort::sort(){
    for(int i = var.size() - 1; i > 0; --i){
        for(int j = 0; j < i; ++j){
            if(var[j] > var[j + 1]) swap(var[j], var[j + 1]);
        }
    }
}
//优化：提前退出
void Bubble_sort::operator()(vector<int>&var){
    for(int i = var.size() - 1; i > 0; --i){
        //设置flag记录当前轮次是否发生了位置变换，如果没有发生位置变换，表示当前位置之后的元素都已排好序
        bool flag = false;
        for(int j = 0; j < i; ++j){
            if(var[j] > var[j + 1]) {
                swap(var[j], var[j + 1]);
                flag = true;
            }
        }
        if(!flag) break;
    }
}

void Bubble_sort::printVar(){
    for(auto i : var) cout << i << ' ';
    cout << endl;
}