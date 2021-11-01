#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Longest palindrome in an array.
// 2 Method--
// 1. sort array traverse from end- first palidrome will largest
// 2. traverse array check palidrome if larger than previous palirome store in palidrome

bool isPalidrome(int n)
{
    int rev=0,d,temp;
    temp=n;
    while (n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if (temp == rev)
        return true;
    else
        return false;
}
int large_Palidrome(int arr[],int size)
{
    int largePalidrom =-1;
    for (int i = 0; i < size; i++)
    {
        if(isPalidrome(arr[i]))
        {
            if(arr[i]>largePalidrom)
                largePalidrom=arr[i];
        }
    }
    return largePalidrom;
}
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Element :\n";
    for (int i = 0; i < n; i++)
        cin>>arr[i];
        
    int PaliNum = large_Palidrome(arr,n);
    if (PaliNum==-1)
        cout<<"Largest Palidrome number in array is NOT EXIST ";
    else
        cout<<"Largest Palidrome number in array is "<<PaliNum;
    return 0;
}