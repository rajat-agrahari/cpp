#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//**** logic is similar to decimal to Binary - here use 8 insted of 2 base value
// 1st approch  - to store remender in array then print array in reverse order
int main(){
    int a[32],n,i=0,r,num;
    cout<<"Enter number for conversion to Octal:: ";
    cin>>n;
    num=n;
    while (n>0)
    {
        r=n%8;
        a[i]=r;
        n=n/8;
        i++;
    }
    cout<<"Octal Number :: ";
    for (int k= i-1; k>=0; k--)
    {
        cout<<a[k];
    }
    int OctalNumber=0;
    i=1;
//----------- 2nd logic without using array
    while (num>0)
    {
        r = num%8;
        num /= 8;
        OctalNumber += r*i;
        i *= 10;
    }
    return 0;
}