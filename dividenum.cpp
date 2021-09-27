#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//**********  Program to Find Quotient and Remainder*********
int main(){
    double divident,divisor,quotent,rem;
    cout<<"Enter divident(x) and divisor(y) for divison(x/y)\n";
    cin>>divident>>divisor;
    while (divisor == 0)
    {
        cout<<"\nPlease enter non-zero divisor\n";
        cin>>divisor;
    }
    cout<<"\nQuotent of division is: "<<(divident/divisor)<<" Remender is: "<<((int)divident%(int)divisor)<<endl;
    return 0;
}