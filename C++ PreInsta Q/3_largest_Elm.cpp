#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Find Largest element in an array :
int main(){
    int n,large;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Element :\n";
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    large = arr[0];
    
    for (int i = 0; i < n; i++)
    {
        if(large < arr[i] )
            large=arr[i];
    }
    cout<<"\nThe largest Element in array is : "<<large;
    
    return 0;
}