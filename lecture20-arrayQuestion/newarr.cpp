#include <bits/stdc++.h> 
#include <iostream>
#include<vector>
using namespace std;



void rotateLeft(std::vector<int>& arr, int k) {
    int n = arr.size();

    // Adjust 'k' if it exceeds the size of the array
    k = k % n;

    std::vector<int> rotatedArr(n);

    // Copy the elements from 'k' to 'n-1' into the rotated array
    for (int i = k; i < n; i++) {
        rotatedArr[i - k] = arr[i];
    }

    // Copy the elements from '0' to 'k-1' into the rotated array
    for (int i = 0; i < k; i++) {
        rotatedArr[n - k + i] = arr[i];
    }

    // Update the original array with the rotated array
    arr = rotatedArr;
}

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    std::vector<int> arr(n);
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int k;
    std::cout << "Enter the number of steps to rotate left: ";
    std::cin >> k;

    rotateLeft(arr, k);

    std::cout << "Array after left rotation by " << k << " steps: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
