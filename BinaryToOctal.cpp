#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//  Binary to octal conversion 
// binary -- decimal -- octal****** first convert to decimal then octal

int binary_to_decimalNum(int n){
    int r,deciNum=0, i=0;
    while (n>0)
    {
        r=n%10; 
        deciNum+=pow(2,i)*r;
        n=n/10; //update n
        i++;
    }
    return deciNum;
}
int decimal_to_Octal(int num){
    int OctalNumber=0,i=1,r;
    //-----------  logic without using array
    while (num>0)
    {
        r = num%8;
        num /= 8;
        OctalNumber += r*i;
        i *= 10;
    }
    return OctalNumber;
}
int main(){
    long n;
    int decimalNum,octNum;
    cout<<"Enter Binary number for conversion :: ";
    cin>>n;
    decimalNum = binary_to_decimalNum(n);
    octNum = decimal_to_Octal(decimalNum);
    cout<<"\nOctal Number is : "<<octNum;
    return 0;
}