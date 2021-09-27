#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int num,digit;
    cout<<"Enter number:: ";
    cin>>num;
    int temp =num;
    bool isUnique = true;
    while (num>0)
    {
        digit = num%10;
        while (temp>0)
        {
            if(digit == temp%10)
            {
                isUnique = false;    
                break;
            }   
            temp=temp/10;
        }
        num=num/10;
    }
    if(isUnique)
        cout<<"\nUnique Number";
    else
        cout<<"\nNot Unique number";
    
    return 0;
}