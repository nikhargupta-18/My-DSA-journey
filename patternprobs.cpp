//patterns --> nested loops
// outermost loop - number of lines
// inner loop --> focus on columns while adjusting them with rows
// print the '' in the inner loops
//observe the pattern

#include <iostream>
using namespace std;

void pattern1(/*square of side n*/){
    
    int n;
    cin>>n;
for (int i = 0; i < n; i++)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"* ";
    }
    cout<<endl;
}
}
void pattern2(/*right angled triangle*/){
    int n ; cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern3(/*right triangle of numbers*/){
    int n ; cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1;  j<=i; j++)
        {
            cout<<j<<" "; 
        }
        cout<<endl;
    }
}

void pattern4(/*equilateral triangle*/){
int n ; cin>>n;
for (int i = 0; i < n; i++)
{
    for ( int j = 0; j < i; j++)
    {
        
    }
    
}

}

int main(){

    return 0;
}