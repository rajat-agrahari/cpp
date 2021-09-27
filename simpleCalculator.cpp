#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    float x,y;
    char op;
    cout<<"Welcome to simple calculator you have to enter two number and one valid oprator.....\n"    ;
    cout<<"Enter First number:: ";
    cin>>x;
    cout<<"Enter Second number:: ";
    cin>>y;
    cout<<"Enter Operator(+,-,*,/):: ";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<"Sum of "<<x<< " and "<<y<<" are:"<<x+y;
        break;
    case '-':
        cout<<"Difference of "<<x<< " and "<<y<<" are:"<<x-y;
        break;
    case '*':
        cout<<"Multiplication of "<<x<< " and "<<y<<" are:"<<x*y;
        break;
    case '/':
        cout<<"Division of "<<x<<" and "<<y<<" are:"<<x/y;
        break;
    
    default:
        cout<<"Invalid input operator!";
        break;
    }
    return 0;
}