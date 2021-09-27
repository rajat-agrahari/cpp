#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,temp,countDigit=0,n2,r,sum=0;
    cout<<"Enter number to check Armstrong:: "    ;
    cin>>n;
    n2=n;
    temp=n;
    while(n2>0)
    {
        n2=n2/10;
        countDigit++;
    }
    // cout<<"\nDigit: "<<countDigit<<" ";
    while(temp>0)
    {
        r=temp%10;
        sum =sum+pow(r,countDigit);
        cout<<" "<<pow(r,countDigit)<<" ";
        temp=temp/10;
    }
    cout<<sum<<" "<<n<<" ";
    if(n == sum)
        cout<<"\nArmstrong number";
    else
        cout<<"\nNot Armstrong";
    return 0;
}