//Given a positive integer n, find its square root.
//If n is not a perfect square, then return floor of √n.
#include<iostream>
using namespace std;
int inbuiltfuncn(int n) {
    
  	// square root using sqrt function, it returns
  	// the double value, which is casted to integer
  	int res = sqrt(n);
  	// use sqrtl for big numbers
  	return res;
}
int sqrt(int n){
    int z =1;
    while (z*z<=n)
    {
        z++;
    }
    return z-1;
}
int main(){
int n ; cin >>n;
cout<<sqrt(n);
return 0;
}
