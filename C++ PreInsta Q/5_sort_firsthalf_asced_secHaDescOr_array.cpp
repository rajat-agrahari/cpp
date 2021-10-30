#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Sort first half in ascending order and second half in descending--complexity: O(n^2);
void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
void sort_array(int *a,int n)
{
    int small,temp;
    for (int i = 0; i < n-1; i++)
    {
        small=i;
        for (int j = i+1; j < n; j++)
        {
            if(a[j]<a[small])
                small=j;
        }
        // temp=a[i];
        // a[i]=a[small];
        // a[small]=temp;
        swap(&a[i],&a[small]);
    }
    cout<<"\nSorted first half in Ascending & second half in Descending\n";
    // print first half in ascending order
    for (int i = 0; i < n/2; i++)
    {
        cout<<a[i]<<" ";
    }
    // print Second half in descending order
    for (int i = n-1; i >= n/2; i--)
    {
        cout<<a[i]<<" ";
    }   
}
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Element :\n";
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    sort_array(arr,n);
    return 0;
}