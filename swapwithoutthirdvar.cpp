#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// ***************Program to Swap Two Numbers Without Using third variable**************
void swap(int &x,int &y)
{
    x=x+y;
    y=x-y;
    x=x-y;
}
int main(){
    int x,y;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;
    swap(x,y);
    cout<<"\nx is: "<<x<<"\ny is: "<<y;
    return 0;
}