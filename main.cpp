#include "head.h"

int main() {
    /////////////////////正确性判断

    // //冒泡排序
    // cout << "bubble_sort: " << endl;
    // Sleep(1000);
    // test(100, 100, 100, bubble_sort);

    // //选择排序
    // cout << "selection_sort: " << endl;
    // Sleep(1000);
    // test(100, 100, 100, selectin_sort);

    //折半插入排序
    //cout << "inserting_half_sort: " << endl;
    //Sleep(1000);
    //test(100, 100, 100, inserting_half_sort);

    //简单插入排序
    //cout << endl << "inserting_sort: " << endl;
    //Sleep(1000);
    //test(100, 100, 100, inserting_sort);

    //希尔排序
    //cout << endl << "shell_sort: " << endl;
    //Sleep(1000);
    //test(2, 100, 100, inserting_sort);

    ////归并排序
    //cout << endl << "merge_sort: " << endl;
    //Sleep(1000);
    //test(100, 100, 100, merge_sort);

    //快速排序
    // cout << endl << "quick_sort: " << endl;
    // Sleep(1000);
    // test(100, 100, 100, quick_sort);


    ////////////////////////性能测试

    //冒泡排序
    cout << endl << "bubble_sort: " << endl;
    time_test(bubble_sort);
    
    //选择排序
    cout << endl << "selection_sort: " << endl;
    time_test(selectin_sort);
   
    //简单插入排序
    cout << endl << "inserting_sort: " << endl;
    time_test(inserting_sort);
    
    //折半插入排序
    cout << endl << "inserting_half_sort: " << endl;
    time_test(inserting_half_sort);

    //简单插入排序
    cout << endl << "shell_sort: " << endl;
    time_test(shell_sort);

    //归并排序
    cout << endl << "merge_sort: " << endl;
    time_test(merge_sort);

    //快速排序
    cout << endl << "quick_sort: " << endl;
    time_test(quick_sort);

    return EXIT_SUCCESS;
}