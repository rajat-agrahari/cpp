#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if (n == 0 || n == 1)
        return n;
    else
        return (fib(n-1) + fib(n-2));
}
int main(){
    unsigned long num,first=0,second=1,next;
    cout<<"Enter number upto print Fibonacci series:: ";
    cin>>num;

    cout<<"fibonacci series ...\n";
    for(int i=0;i<num;i++)
    {
        cout<<first<<" ";
        next = first+second;
        first=second;
        second=next;
    }
    // fibonacci series using recursion
    cout<<endl;
    for(int j=0;j<num ;j++)
    {
        cout<<fib(j)<<" ";
    }
    return 0;
}