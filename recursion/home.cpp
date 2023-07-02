#include<bits/stdc++.h>
using namespace std;

    void reachedHome(int src,int dest){
        cout<<"src "<<src<<" destination "<<dest<<endl;
        if(src==dest){
            cout << "pahuch gya "<<endl;
            return;
        }
        
        src++;

        reachedHome(src,dest);
            
    }

int main(){

    int src = 1;
    int dest = 10;

    reachedHome(src,dest);
    return 0;
}