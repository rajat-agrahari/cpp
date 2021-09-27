#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// compare two string using loop by comparing each character array element of string
int main(){
    string s1,s2;
    int i,j,k=0;
    cout<<"Enter two strings:: ";
    cin>>s1>>s2;
    if(s1.size() != s2.size())
        cout<<"Two string are NOT equal\n";
    else
    {
        for (i = 0,j=0; s1[i]!='\0',s2[j]!='\0' ; i++,j++)
        {
            if(s1[i] == s2[j])
                k++; 
        }
    }
    if(k == i)
        cout<<"Equal string";
    else
        cout<<"Not equal string";
    // for the use of strcmp() function store string s1,s2 in char array
    return 0;
}