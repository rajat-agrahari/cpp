#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int num,i,j,arr[20],k=0,digit;
    cin>>num;
    bool isUnique =true;
    while (num>0)
    {
        digit = num%10;
        arr[k]=digit;
        num=num/10;
        k++;
    }
    for ( i = 0; i < k; i++)
    {
        for ( j = i+1; j < k; j++)
        {
            if(arr[i] == arr[j])
                isUnique=false;
        }
    }
    if(isUnique)
        cout<<"Unique Number";
    else
        cout<<"NOT Unique Number";
        
    
    return 0;
}