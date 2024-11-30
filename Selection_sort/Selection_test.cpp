#include "Selection_sort.cpp"

int main(){
    Selection_sort selection_sort;

    vector<int> arr = {1, 3, 4, 5, 8, 6, 4, 3, 5, 6};
    selection_sort(arr);
    for(auto i : arr) cout << i << ' '; cout << endl;

    return EXIT_SUCCESS;
}