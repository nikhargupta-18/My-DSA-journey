#include <bits/stdc++.h>
using namespace std;
int main(){
    // to write a code for if else ladder for eg-
    int a;
    cout<<"type in your maks<<endl";
    cin>>a;
if(a<25){
    cout<<"F";
}
if(a>25 && a<40){
    cout<<"D";
}
if(a>=40 && a<60){
    cout<<"C";
} // this is a slow function as all if statements are runned irrespective of the input
//better would be to use else if instead in all except the first if


    return 0;
}