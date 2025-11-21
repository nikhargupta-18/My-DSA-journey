#include <iostream>

using namespace std;
// n<<i means leftshifting n , i times [0 1 1 0 1 ] ---> [1 1 0 1 0] (lshift once)
//if you left shift a number n , i times , it gets converted to n * (2^i)
//n>>i right a number n times [0 1 1 0 0 1]--->[1 0 1 1 0 0]  (rshift once)
int main()
{
    int n , i;
    cin>>n>>i;

    cout<<n<<"<<"<<i<<" = "<<(n<<i)<<endl;
    cout<<n<<">>"<<i<<" = "<<(n>>i)<<endl;


    return 0;
}