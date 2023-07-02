#include <iostream>
using namespace std;

int firstOcc(int arr[], int size , int key){
    int s =0;
    int e = size-1;
    int mid = (s/2)+(e/2);
    int ans = -1;

    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid-1;

        }else if (key > arr[mid]){
            // right main jao 
            s= mid +1;
        }
        else if(key< arr[mid]){
            // left mai jao 
            e = mid -1;

        }
        mid = (s/ 2) + (e / 2);
    }
    return ans;
}


int lastOcc(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    int mid = (start / 2) + (end / 2);
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
            //end = mid -1 ;

        }
        else if (key > arr[mid])
        {
            // right main jao
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = (start / 2) + (end / 2);
    }
    return ans;
}

int main()
{

    int even[5] = {1, 2, 3, 3, 5};
    int odd[7]={2,3,3,5,7,8,9};

    cout << "last occ of 3 is at index : " << lastOcc(even, 5, 3) << endl;
    cout << "first  occ of 3 is at index : " << firstOcc(odd, 7, 3) << endl;

    return 0;
}