#include "bubble_sort.cpp"

int main(){
    vector<int>var = {{1, 3, 4, 2, 4, 6, 7, 9, 8}};
    Bubble_sort bubble(var);

    cout << "自身内部排序" << endl;
    bubble.printVar();
    bubble.sort();
    bubble.printVar();
    cout << endl;

    cout << "仿函数" << endl;
    vector<int>var2 = {1, 4, 6, 7, 9, 3, 2};
    bubble(var2);
    for(auto i : var2) cout << i << ' '; cout << endl;

    return EXIT_SUCCESS;
}