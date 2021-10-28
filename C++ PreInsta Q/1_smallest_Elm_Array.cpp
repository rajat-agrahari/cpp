#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//--- Find Smallest Element in an Array  

int main(){
    int n,small;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Element :\n";
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    small = arr[0];
    
    for (int i = 0; i < n; i++)
    {
        if(small > arr[i] )
            small=arr[i];
    }
    cout<<"\nThe smallest Element in array is : "<<small;
    
    
    return 0;
}