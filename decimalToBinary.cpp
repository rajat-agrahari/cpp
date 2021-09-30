#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// 1st approch  - to store remender in array then print array in reverse order
int main(){
    int a[32],n,i=0,r;
    cout<<"Enter number for conversion to binary:: ";
    cin>>n;
    while (n>0)
    {
        r=n%2;
        a[i]=r;
        n=n/2;
        i++;
    }
    cout<<"Binary Number :: ";
    for (int k= i-1; k>=0; k--)
    {
        cout<<a[k];
    }
    int binaryNumber=0,i=1;
//----------- 2nd logic without using array
    // while (n>0)
    // {
    //     r = n%2;
    //     n /= 2;
    //     binaryNumber += r*i;
    //     i *= 10;
    // }
    return 0;
}