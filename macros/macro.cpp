#include<bits/stdc++.h>
using namespace std;

#define PI 3.14

inline int getMax(int& a,int& b){
     return (a>b) ? a:b;
}
  
int main(){
    int r =5;
    float area = PI*r*r;
    cout<<area<<endl;

    //local vs global var ✅
    //inline function ✅
    //macros ✅
    //defalut arguments ✅

    //jab function main arg nhi diya jaye to ham start karne ke loiye de dete ahi function define karte 
    // time .. eg--> fun1(arr[],size,int start=0)
    // defalut argument start from right most place .. > goes from right to left 
    // (int n = 3 , int start = 2 , int end = 5)

    // constant variable ..

    const int c =4;

    cout<<"this is c : "<<c<<endl;
    
    // ternery operator 

    // ans = a>b ? a:b

   int  a=4;
   int  b=5;
   int ans = 0;
     
     ans = getMax(a,b);
     cout<<ans<<endl;

    return 0;
}