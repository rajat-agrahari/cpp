#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// swap using third string by using strcpy(*char) which take char array string

int main(){
    char s1[50],s2[50],temp[50];
    cout<<"Enter first string:: ";
    cin>>s1;
    cout<<"Enter second string:: ";
    cin>>s2;
    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);
    cout<<"\nfirst string::"<<s1;
    cout<<"\nsecond string::"<<s2;
    return 0;
}