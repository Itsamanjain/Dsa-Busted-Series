#include<bits/stdc++.h>
using namespace std;

    void reverse(string& s,int i,int j){
        //base case 
        if(i>j){
            return ;
        }
        swap(s[i],s[j]);
        i++;
        j--;
        cout<<":function ka str "<<s<<endl;
        reverse(s,i,j);
        

    }

int main(){

    string s = "abcde";
    reverse(s,0,s.length()-1);

    cout<<s<<endl;

    return 0;
}