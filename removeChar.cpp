#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*  C++ Program to Remove Characters in String Except Alphabets  */


int main(){
    string str,temp="";
    cin>>str;

    for (int i = 0; i < str.size(); i++)
    {
        if((str[i] >='A' && str[i]<='Z') || (str[i] >='a' && str[i]<='z'))
            temp=temp+str[i]; //cancatenate with temp string
    }
    str=temp;
    cout<<"\nAfter removing :: "<<str;
    return 0;
}