#include<bits/stdc++.h>
using namespace std;

int add(int arr[],int size,int sum){
    
    if(size==0)
        {
            return sum;
        }

    sum=sum+arr[0];
    int ans = add(arr+1,size-1,sum);
    return ans;

}

int main(){

    int arr[5]={1,2,3,4,5};
    int size=5;
    int sum = 0;

    int ans = add(arr,size,sum);
    cout<<"the ans is "<<ans<<endl;

    return 0;

}