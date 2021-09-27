#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//C++ Program to Count Vowels Consonants Digits Spaces in String
int main(){
    int v=0,c=0,d=0,sp=0;
    // char str[150];
    string str;
    cout<<"Enter string (line):: ";
    getline(cin,str);
    // cout<<str.size();
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i] == 'a' || str[i] == 'u' || str[i] == 'e' || str[i] == 'o' || str[i] == 'i' || str[i] == 'A' || str[i] == 'U' || str[i] == 'E' || str[i] == 'O' || str[i] == 'I')
            v++;
        else if((str[i] >='A' && str[i]<='Z') || (str[i] >='a' && str[i]<='z'))
            c++;
        else if((str[i] >='0' && str[i]<='9'))
            d++;
        else if(str[i]==' ')
            sp++;
    }
    cout<<"\nVowel: "<<v<<"\nConsonent: "<<c<<"\nDigit: "<<d<<"\nSpace: "<<sp;
    return 0;
}