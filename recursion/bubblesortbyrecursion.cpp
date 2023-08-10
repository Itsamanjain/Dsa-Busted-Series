#include <bits/stdc++.h>
using namespace std;

void sortArray(int *arr, int size)
{
    // base case
    if (size == 0 || size == 1)
        return;

    // 1 case solve kardo baki recursion kar dega
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    sortArray(arr, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[5] = {1, 5, 2, 6, 3};
    sortArray(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}