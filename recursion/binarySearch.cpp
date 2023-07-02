#include<iostream>
using namespace std;

    bool binarySearch(int arr[],int s ,int e , int k){
        // base case
        if(s>e){
            return false;
        }
        int mid = (s/2) +(e/2);
        if(arr[mid]==k){
            return true;
        }

        if(arr[mid]<k){
            return binarySearch(arr,mid+1,e,k);
        }else{
            return binarySearch(arr,mid-1,e,k);
        }
    }

int main(){

    int arr[5]={1,2,5,7,9};
    int size=5;
    int k=7;
    int s;
    int e;

    cout << "Present or not " << binarySearch(arr, 0, size-1, k) << endl;

    return 0;
}