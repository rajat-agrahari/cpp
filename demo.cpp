#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int arr1[100],arr2[100],temp[100],n,m,k=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    for(int j=0;j<m;j++)
        cin>>arr2[j];
    for(int i=0;i<n;i++)
    {
       temp[k]=arr1[i];
       k++;
    }
    for(int i=0;i<m;i++)
    {
       temp[k]=arr2[i];
       k++;
    }
    sort(temp,temp+k);
    for(int  i=0;i<k;i++)
        cout<<temp[i]<<" ";
    return 0;
}