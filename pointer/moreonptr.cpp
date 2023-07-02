#include<iostream>
using namespace std;

int main(){
    // int arr[10]={2,44,63};
    //     std::cout<< arr << endl;
    //     std::cout<< &arr << endl;
    //     std::cout<< &arr[0] << endl;
    //     std::cout<< *arr+1 << endl;
    //     std::cout<< *(arr+1) << endl;
    //     std::cout<< (*arr)+1 << endl;
    //     std::cout<< "5th"<<(&arr)+1 << endl;
        

    //     int i=2;
    //     std::cout<< i[arr]<<endl;

    //     char ar[6]="abcde";
    //     ::cout<<ar<<endl;
    //     char *c=&ar[0];
    //     ::cout<<"thu s is when the value is c "<<c<<endl;



        // pointer in functions

        // double ptr

        int y = 2;
        int *ptr=&y;
        int **ptr2=&ptr;
        int ***ptr3=&ptr2;

        std::cout<<"d ptr :"<<**ptr2<<endl;
        std::cout<<"d ptr :"<<&ptr<<endl;
        std::cout<<"printing  ptr 2 :"<<ptr2<<endl;
        std::cout<<"address of ptr2 :"<<&ptr2<<endl;
        std::cout<<"d ptr :"<<ptr3<<endl;
        std::cout<<"d ptr :"<<&ptr3<<endl;
        std::cout<<"d ptr :"<<***ptr3<<endl;
        



    return 0;
}