//patterns --> nested loops
// outermost loop - number of lines
// inner loop --> focus on columns while adjusting them with rows
// print the '' in the inner loops
//observe the pattern

#include <iostream>
using namespace std;

void pattern1(/* printing a square of side n*/){
    
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
void pattern2(/*printing a right angled triangle*/){
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

void pattern3(/*printing a right triangle of numbers*/){
    
}

int main(){

    return 0;
}