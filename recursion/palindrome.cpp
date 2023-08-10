#include<iostream>
using namespace std;

    bool checkPalindrome(string s , int i , int j){
        if(i>j){
            return true;
        }

        if(s[i] != s[j]){
            return false;
        }else{
            // recursive call 
            return  checkPalindrome(s,i+1,j-1); 
        }
    }

int main(){

    string s = "abbccbba";

    bool ans = checkPalindrome(s,0,s.length()-1);
    if(ans){
        cout<<"is palindrome"<<endl;
    }else{
        cout<<"is not palindrome"<<endl;
    }
    return 0;
}