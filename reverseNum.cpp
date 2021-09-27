#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int no,rev=0,r,n;

    cout<<"Enter any positive number :: ";
    cin>>n;

    no=n;
    int countDigit =0,sumDigit=0;
    while(no>0) // check no is greater than 0
    {
        r=no%10;    // take last digit using remender  % operator
        rev=rev*10+r; // store reverse value in sep vriable
        no=no/10;   // update num;
        sumDigit=sumDigit+r;
        countDigit++;
    }
    // reverse number
    cout<<"\nReverse of a Number [ "<<n<<" ] is :: [ "<<rev<<" ] \n";    
    // no of digit
    cout<<"Number of digit:: "<<countDigit;

    // sum of digit in number
    cout<<"\nSum of digit:: "<<sumDigit;

    // To check Palidrome number == reverse 
    if(rev == n)
        cout<<"\nNumber is Palidrome ";
    else
        cout<<"\nNumber is NOT Palidrome ";
    return 0;
}