#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//--- Find Second Smallest Element in an Array--#3way to solve it
/*
Method 1: By sorting the array in ascending order . O(nlogn)
Method 2: By traversing the array twice. In the first traversal find the smallest element (x) and in the second traversal, skip x and find the next smallest element which is >x.
Method 3: By traversing the array and storing the smallest element as and when we encounter it. -- complexity O(n)
*/

void smallElm(int arr[],int n)
{
    int first,second;
     first=INT32_MAX;
    second=INT32_MAX;   
    if (n<2)
    {
        cout<<"Invalid input array size\n";
        return;
    }
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]<first)
        {
            second=first;
            first=arr[i];
        }
        else if(arr[i]<second && arr[i]!=first)
            second=arr[i];
    }
    if (second == INT32_MAX)
        cout<<"There are no second smallest element\n";
    else
        cout<<"\nThe second smallest element in array is :"<<second;
}
int main(){
    int n,first,second;
    // first=INT32_MAX;
    // second=INT32_MAX;   //Assign infinte number
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Element :\n";
    for (int i = 0; i < n; i++)
        cin>>arr[i];    
    smallElm(arr,n);
    
    return 0;
}