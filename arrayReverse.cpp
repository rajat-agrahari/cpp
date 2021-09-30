#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void printArray(int *arr,int n)
{
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" "; // arr[i] <===> *(arr+i)
    }
}
// void swap(int *p,int *q)
// {
//     int temp;
//     temp=*p;
//     *p=*q;
//     *p=temp;
// }

// --------1st login swap first and last element then incr, dec index
// -------2nd login copy array in reverse order in another array then print
void reverseArray(int *a,int n)
{
    int j=n-1,temp;
    for (int i = 0; i < j; i++,j--)
    {
           temp=a[i];
           a[i]=a[j];
           a[j]=temp;
    }
}
int main(){
    int arr[50],n;
    cout<<"Enter size of array:: ";
    cin>>n;
    cout<<"Enter array element:\n";
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    cout<<"Befor reverse array:: ";    
    printArray(arr,n);
    reverseArray(arr,n);

    cout<<"After reverse array:: ";    
    printArray(arr,n);
    
    return 0;
}