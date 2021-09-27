#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void printArray(int *arr,int n)
{
    for (int i = 0; i < n; i++)
    {
       cout<<*arr[i]<<" "; // arr[i] <===> *(arr+i)
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
    cout<<"Befor reverse array:: "<<arr;    
    printArray(arr,n);
    return 0;
}