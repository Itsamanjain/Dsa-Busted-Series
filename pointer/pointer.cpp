#include<iostream>
using namespace std;

int main(){

    int num = 10;
    int *ptr = &num;
    int *abc;

    cout << num << endl;
    cout<< &num <<endl;
    cout<< *ptr <<endl;
    cout<< *abc <<endl;

    num++;
    cout << num << endl;
    cout<< *ptr <<endl;
    cout<< ptr <<endl;
    double d2 =3.3;
    double *arc =&d2;


    cout<<"size of num is "<<sizeof(num)<<endl;
    cout<<"size of ptr is "<<sizeof(ptr)<<endl;
    cout<<"size of ptr is "<<sizeof(*ptr)<<endl;
    cout<<"size of ptr is "<<sizeof(arc)<<endl;
    cout<<"size of ptr is "<<sizeof(*arc)<<endl;

    
    
    int a=num;
    cout<<"before : "<<num<<endl;
    a++;
    cout<<"after : "<<num<<endl;
    int *p = &num;
    cout<<"before: "<<num<<endl;
    (*p)++;
    cout<<"after: "<<num<<endl;

    cout<<"before :"<<p<<endl;
    p=p+1;
    cout<<"after :"<<p<<endl;

    cout<<"before :"<<p<<endl;
    (*p)=(*p)+1;
    cout<<"after :"<<p<<endl;

    



    return 0;
}