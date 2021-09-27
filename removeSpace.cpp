#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*  C++ Program to Delete or Remove Spaces from a String  */
// this logic can be used to remove vowel as well , count words
int main(){
    string str,temp="";
    int i;
    cout<<"Enter string containing space:: ";
    getline(cin,str);
    //using third temp char string 
    for ( i = 0; i < str.size(); i++)
    {
        if (str[i]!=' ')
            temp=temp+str[i];
    }
    
    cout<<"\nNew string is:: "<<temp;
    // by shifting character bt skip space
    // for(i=0; i<len; i++)
    // {
    //       if(str[i]==' ')
    //       {
    //          for(j=i; j<len; j++)
    //          {
    //              str[j]=str[j+1];
    //           }
    //             len--;
    //          }
    //  }
    return 0;
}