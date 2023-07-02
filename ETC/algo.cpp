#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// int getMax(int a, int b){
//     if(a < b){
//         cout << "b is largest" << endl;
//         return b;
//     } else {
//         cout << "a is largest" << endl;
//         return a;
//     }
// }

// int getMin(int a, int b){
//     if(a < b){
//         cout << "a is smallest" << endl;
//         return a;
//     } else {
//         cout << "b is smallest" << endl;
//         return b;
//     }
// }

// void swapValues(int& a, int& b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

int main(){
    int a = 3, b = 5;

    int maxValue = max(a, b);
    int minValue = min(a, b);

    cout << "Max: " << maxValue << endl;
    cout << "Min: " << minValue << endl;

    swap(a, b);

    cout << "Swapped values: a = " << a << ", b = " << b << endl;

    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<< " after reverse: "<<abcd<<endl;

    return 0;
}
