#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// lcm of two number
int main(){
    int a,b,rem,lcm;
    cout<<"Enter two number for HCF::\n";
    cin>>a>>b;
    
    int max =(a>=b)?a:b;
    while (1)
    {
        if(max%a ==0 && max%b ==0)
            {
                cout<<"LCM of "<<a<<" and "<<b<<" is "<<max;
                break;
            }
            max++;
    }
    
    return 0;
}