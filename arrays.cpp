#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    cout<<"type in 4 numbers"<<endl;
    // cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]; // uncomm this
    arr[3]=32;
    cout<<"third index is "<<arr[3]<<endl;
     // arrays elements are stored at concesecutive memory point



     //2D arrays----->
     int arrayyyy[3][5];  //left index determines rows , right index determine column
     arrayyyy[1][3] = 12;    
     cout<<arrayyyy[1][3]<<endl;
     cout<<arrayyyy[1][6]<<endl; // some garbage value wil be printed cuz no value is assigned
     cout<<arrayyyy[1][2]<<endl;


    string s  = "nikhar";
    int len= s.size(); // finding the length of the string
    cout<<s[2]<<endl;
    cout<<s[len-1];
return 0;

}
//brute force --> generating all subarrays

void subarrays(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nAll Subarrays:\n";
    // Outer loop for start index
    for (int i = 0; i < n; i++) {
        // Inner loop for end index
        for (int j = i; j < n; j++) {
            // Print subarray from i to j
            cout << "[ ";
            for (int k = i; k <= j; k++) {
                cout << arr[k] << " ";
            }
            cout << "]\n";
        }
    }
}