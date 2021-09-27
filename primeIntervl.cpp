#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    bool isPrime=true;
    for(int k=2;k<n;k++)
    {
        if(n%k ==0)
        {
            isPrime =false;
        }
    }
    if(isPrime && n !=1)
        return true;
    else
        return false;
        
}
int main(){
    int n,m;
    cout<<"Enter two number interval to find prime number:\n";
    cin>>n>>m;
    cout<<"\nPrime numbers are:: ";
    for (int i = n; i < m; i++)
    {
        if(isPrime(i))
            cout<<i<<" ";
    }
    
    return 0;
}