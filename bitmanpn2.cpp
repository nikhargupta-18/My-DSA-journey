//checking if i'th bit is set or not
#include <bits/stdc++.h>
#define ll long long 
using namespace std;
//eg--> n=12 --> [1 1 0 0] // i'th bit is counted from right to left (rightmost is i=0)
// at i =0 ans = not set , at i = 3 ans = set

void checking_whether_ith_bit_is_set(){
    int n ;cin>>n;
    int i;cin>>i;
    int f = 1;
     //to check for i'th bit , left shift f ,i times
    f = f<<i;

    int res = f&n; // '&' acts as 'bitwise and' operator in b/w two values
                    // a = 101011
                    // b = 110100
                    //a&b= 100000
    if(res==0){
        cout<<"not set";
    }
    else
    {
        cout<<"set";
    }
    
    
}
void counting_number_of_set_bits(){
    //let N = [0 1 0 0 1 1 1 0] = 78


    //Approach 1 --> using right shift
    int N = 78;
    int cntr = 0;
    while (N>0)
    {
          if(N&1>0){
        cntr++;
    }
    N = N>>1; // right shifting N by 1 
    }
    cout<<cntr<<endl;

    //Approach 2 //https://www.youtube.com/watch?v=1He0uT56d9k&list=PL5DyztRVgtRUVORP3AXvX91uovcaZv0q9&index=4
    int cnt =0; int n = 78;
    while (n>0)
    {
        cnt++;
        n=n&(n-1);
    }
    cout<<cnt;  
}


int main()
{
   counting_number_of_set_bits();
}
