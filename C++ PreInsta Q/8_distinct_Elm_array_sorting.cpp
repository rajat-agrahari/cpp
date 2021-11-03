#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Counting Distinct Elements in an Array 
// 1. method -- sort array then skip consective element
// 2.method -- by comaparing each element
int distinct_Elm(int arr[],int n)
{   
    // By sorting array skip consective element
    sort(arr,arr+n);
    int count=0;
    for (int i = 0; i < n; i++)
    {
        while (i<n-1 && arr[i]==arr[i+1])
            i++;
        
        count++;
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Element :\n";
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    cout<<"Distict Element are:  "<<distinct_Elm(arr,n);
    return 0;
}