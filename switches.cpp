#include <iostream>
using namespace std;
int main(){
    int day;
    cout<<"type in the number"<<endl;
    cin>>day;
    switch(day){
        case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"tuesday";
        break;
        case 3:
        cout<<"wednesday";
        break;
        case 4:
        cout<<"thursday";
        break;
        default:
        cout<<"invalid";
        
    }// if we dont use break then the case matching will be printed along with all the following cases


     return 0;
}