#include<bits/stdc++.h>
using namespace std;

void maps(){

    // declaring a map --> map<key,value> name; 
    //internal working of map is red-black tree O(log n) time complexity

    //the keys are unique and are sorted automatically

    map<int , int> mp;  
    map<int , pair<int,int>> mp;
    map<pair<int,int>,int> mpp;

    //storing an element in map
    mp[1] = 10;        // inserts (1,10)
    mp.insert({2, 20}); // inserts (2,20)
    mpp[{2,3}]=10;  
    // If key already exists, mp[key] = val overwrites the value.
    // If you use insert, it does not overwrite existing keys.

    mp.insert({2, 30}); // won’t overwrite 2’s value

    cout << mp[2];  //accessing

    mp.erase(2);      // by key
    mp.erase(mp.begin()); // by iterator

    //find -->
    auto it = mp.find(5);

    if (it != mp.end())
    cout << it->first << " " << it->second;

}

void unorderedmaps(){
       unordered_map<int, int> mp;

    // insert
    mp[10] = 5;
    mp.insert({20, 7});

    // check existence
    if (mp.count(10)) cout << "exists\n";

    // iterate
    for (auto &p : mp)
        cout << p.first << " " << p.second << "\n";

    // erase
    mp.erase(10);

    // find
    auto it = mp.find(20);
    if (it != mp.end())
        cout << it->second;
}

void hashing(){
    
}



int main(){


    return 0;
}
