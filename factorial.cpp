#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Recursive function aproch
int factorial(int n)
{
    if(n == 0)
        return 1;
    return n*factorial(n-1);
    
}
int main(){
    int num,f=1;
    cout<<"Enter the number :: ";
    cin>>num;
    int num2 = num;
    // Iterative aproach
    if(num<0)
        cout<<"Please invalid number!!!!\n";
    while (num>0)
    {
       f=f*num;
       num--;
    }
    cout<<"\nFactorial is::  "<<f;
    cout<<"\nFactorial is::  "<<factorial(num2);

    return 0;
}