#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int num;
    cout<<"Enter num:: ";
    cin>>num;
    bool isPrime=true;
    for(int i=2;i<num;i++)
    {
        if(num%i ==0)
        {
            isPrime =false;
        }
    }
    if(isPrime && num !=1)
        cout<<"Prime NUmber";
    else
        cout<<"Not Prime";

    return 0;
}