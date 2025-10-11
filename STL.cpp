#include <bits/stdc++.h>
using namespace std;

void Vector(){

    vector<int> v;   // defining a vector named v

    v.push_back(1);  // inserts an element '1' in a empty container
    v.emplace_back(2);  //same as push back but faster

    vector<pair<int , int>>vec;

    vec.push_back({1,2}); // inserting a pair in vector
    vec.emplace_back(1,2); // emplace back assumes it to be a pair without curly\

    vector<int>v(5,100);  // vector formed --> {100,100,100,100,100}
    vector<int>v(7); // takes 0 or garabage value depending upon compiler

    vector<int>v1(3,10);
    vector<int>v2(v1); // another container similar v1

    //accesing elements in a vector
    cout<<v[1];   
    //iterators------>

    vector<int>::iterator it = v.begin();// iterator starting from beginning

    it++;
    cout<<*(it)<< " ";  // using 'value at' operator

    it  = it+2;
    cout<<*(it)<<" ";

    vector<int>::iterator it = v.end(); // iterator staring from end
    // it points to the memory location just after the last index
    //so in order for it to point to last index of vector , do a it-- first.

    cout<<v.back()<<" "; //points to the last element of the vector

    //printing a vector 

    for (auto it = v.begin(); it!=v.end(); it++)
    {
        cout<<*(it)<<" ";
    }
    // auto identifies the  data type whether it is string , vector, array, int ...
    //and makes a iterator for it

    v.erase(v.begin()+2); // erases the 3rd element in vector
    v.erase(v.begin()+1 , v.begin()+4);// erases multiple elements [start , end)
    


}




int main(){


    return 0;
}