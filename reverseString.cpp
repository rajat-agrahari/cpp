#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// reverse string using array
int main(){
    char s1[50],s2[50];
    int i,j,size;
    cout<<"Enter string:: ";
    cin>>s1;
    size= strlen(s1);
    cout<<"\nSize of string"<<size;
    for (i = size-1,j=0; i >= 0; i--,j++)
    {
        s2[j]=s1[i];
    }
    s2[j]='\0';
    cout<<"\nReverse string :: "<<s2;
    return 0;
}