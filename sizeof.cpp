#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    // ------- Program to Find Size of int, float, double and char---------
    int a=3;
    float b=1.23;
    char ch = 'A'    ;
    double d= 6.7754;
    long  l =1231;
    cout<<"Int size: "<<sizeof(a)<<"\nFloat size: "<<sizeof(b)<<"\nChar size: "<<sizeof(ch);
    cout<<"\ndouble size: "<<sizeof(d)<<"\nLong size; "<<sizeof(l);

    
    return 0;
}