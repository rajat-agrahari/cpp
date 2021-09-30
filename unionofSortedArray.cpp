#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,m,a[50],b[50],u[100],i,j,k;
    cout<<"Enter size of first array";
    cin>>n;
    cout<<"Enter element\n";
    for (int i = 0; i < n; i++)
        cin>>a[i];
    
    cout<<"Enter size of second array";
    cin>>m;
    cout<<"Enter element\n";
    for (int i = 0; i < m; i++)
        cin>>b[i];
    
    for ( i = 0,j=0,k=0; i < n && j<m;)
    {
            if (a[i]<b[j])
            {
                u[k]=a[i];
                i++;
            }
            else if (a[i]>b[j])
            {
                u[k]=b[j];
                j++;
            }
            else 
            {
                u[k]=b[j];
                i++;
                j++;
            }
            k++;
    }
    // print the remaining array if any left due to larger element
    if(i<n){
        for(;i<n;++i){
            u[k]=a[i];
            k++;
        }
    }
    else if(j<m){
        for(;j<m;++j){
            u[k]=b[j];
            k++;
        }
    }
    cout<<"\nUnion of two arrays is :: \n\n";
    for(i=0;i<k;++i)
    {
        cout<<u[i]<<"  ";
    }
    return 0;
}