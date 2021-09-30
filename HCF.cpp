#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int a,b,rem,hcf;
    cout<<"Enter two number for HCF::\n";
    cin>>a>>b;

    // By Divison method
    
    // while(rem !=0)
    // {
    //     rem = a%b;
    //     a=b;
    //     b=rem;
    // }
//----2nd logic
    // swap a and b if a is greater than b
    if(a>b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    for (int i = 1; i < a; i++)
    {
        if(a%i ==0 && b%i==0)
            hcf=i;        
        
    }
    
    // cout<<"\nHCF:: "<<a<<endl;
    cout<<"\nHCF:: "<<hcf<<endl;
    return 0;
}