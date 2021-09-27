#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
     int y,d,w;

    cout<<"Enter No. of days :: ";
    cin>>d;

    y=d/365; // no of years
    d=d%365;    // remaing days left after seprste 365 days as years
    w=d/7;  // no of weeks in remaining days
    d=d%7;  // no  of days left after complete the weeek as multiple of 7

    cout<<"\nNo. of Years: : "<<y<<"\nNo. of Weeks :: "<<w<<"\nNo. of Days :: "<<d<<"\n";    
    return 0;
}