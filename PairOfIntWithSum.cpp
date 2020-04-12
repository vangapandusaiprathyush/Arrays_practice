#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter no. of integers in an array"<<endl;
    cin>>n;
    int arr[n];
    int sum;
    cout<<"enter sum to be checked"<<endl;
    cin>>sum;
    
    int ans1=0;
    int ans2=0;
    
    int count = 0;
    cout<<"enter array elements"<<endl;
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Outputting for every success pair"<<endl; 
    for(int j=0;j<n-1;j++){
        for(int k=j+1; k<n;k++){
            if(arr[j]+arr[k] == sum){
               ans1 = arr[j];
               ans2 = arr[k];
               count++;
            cout<<ans1<<" "<<ans2<<" "<<count<<endl;
            }
        }
    }    
        
    cout<<"total count "<<count;    
    return 0;
}

/*
Complexity : O(n^2)

-  It can be done in O(n) using Map concept.
*/
