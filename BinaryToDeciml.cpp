#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Binary to decimal conversion
//  same logic use for Octal to decimal replace 2 by 8 number
int main(){
    long n;
    int deciNum=0,r,i;
    cout<<"Enter Binary number for conversion to decimal:: ";
    cin>>n;
    i=0;
    while (n>0)
    {
        r=n%10; 
        deciNum+=pow(2,i)*r;
        n=n/10; //update n
        i++;
    }
    cout<<"Decimal Number is ::  "<<deciNum;
    
    return 0;
}