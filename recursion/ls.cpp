#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[],int size,int k){
    if(size==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }else{
        bool remainPart = linearSearch(arr+1,size-1,k);
        return remainPart;
    }
}

int main(){

    int arr[5]={1,4,3,5,2};
    int size=5;
    int k=3;

    bool ans = linearSearch(arr,size,k);

    if(ans){
        cout<<"present"<<endl;
    }else{
        cout<<"not present"<<endl;
    }

    return 0;
}