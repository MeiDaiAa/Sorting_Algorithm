#include "Insertion_sort.cpp"
#include <algorithm>


int main(){
    vector<int> arr = {1, 3, 4, 5, 8, 6, 4, 3, 5, 6};
    Insert_sort()(arr);

    for_each(arr.begin(), arr.end(), [](int i){cout << i << ' ';});
    cout << endl;
    return EXIT_SUCCESS;
}