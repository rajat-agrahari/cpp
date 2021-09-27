#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int a,b,rem;
    cout<<"Enter two number for HCF::\n";
    cin>>a>>b;

    // By Divison method
    while(rem !=0)
    {
        rem = a%b;
        a=b;
        b=rem;
        
    }
    cout<<"\nHCF:: "<<a<<endl;
    return 0;
}