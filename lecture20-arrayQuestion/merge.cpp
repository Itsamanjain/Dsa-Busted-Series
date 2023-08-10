#include <iostream>
#include <vector>

void merge(std::vector<int> const & arr1, std::vector<int> const & arr2, std::vector<int> & arr3) {
    int i = 0, j = 0;
    int k = 0;
    arr3.resize(arr1.size() + arr2.size());
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        }
        else {
            arr3[k++] = arr2[j++];
        }
    }
    // Copy the rest of arr1 (if needed):
    while (i < arr1.size()) {
        arr3[k++] = arr1[i++];
    }
    // Copy the rest of arr2 (if needed):
    while (j < arr2.size()) {
        arr3[k++] = arr2[j++];
    }
}

void print(std::vector<int> const & ans) {
    for (size_t i = 0; i < ans.size(); i++) {
        std::cout << ans[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr1 = { 1,3,5,7,2,34,0,3,1,5,8 };
    std::vector<int> arr2 = { 2,4,6 };
    std::vector<int> arr3;
    merge(arr1, arr2, arr3);
    print(arr3);
    return 0;
}