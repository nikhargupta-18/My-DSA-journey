#include <bits/stdc++.h>

using namespace std;

int cntr=0;
void recursion(){
    if(cntr==4){  //this is base condition without this there will be overflow
        return ;
    }
    else{
    cout<<"recursion"<<endl; cntr++;
    recursion();
    }
}
int i ;
    //problem 1 --> print rec N times
int n =5 ; 
void Ntimes(int i , int n){
        if(i>n){
            return;
        }
        cout<<"rec"<<endl;
        Ntimes(i+1,n);
    }

    //print linearly from 1 to n using backtracking (not calling the function i+1, n)
void backtracking(int i , int n){

    if(i<1){
        return;
    }
    backtracking(i-1,n);
    cout<<i<<endl;  // this will not be executed bcoz a funcn is called before it can be
                    // executed , it will be executed when the function returns
}

void reverseBT(int i , int n){
    if(i>n){
        return;
    }
    reverseBT(i+1,n);
    cout<<i<<endl;
}

int main()
{
    // recursion();
    
    // Ntimes(1,n);

    // backtracking(n,n);

    reverseBT(1,n);
}