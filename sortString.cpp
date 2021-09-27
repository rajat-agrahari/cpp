#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*  C++ Program to Sort Strings in Lexicographical Order  */

int main(){
    int n;
    cout<<"How many string you want to enter:: ";
    cin>>n;
    string str[n],temp;
    cout<<"Enter string::\n";
    for (int i = 0; i < n; i++)
    {
       cin>>str[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (str[i]>str[j])
            {
                   temp = str[i];
                   str[i]=str[j];
                   str[j]=temp;
            }
        }
    }
    cout<<"\nSorted string in lexographical order:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<str[i]<<"\n";
    }
    
    
    return 0;
}