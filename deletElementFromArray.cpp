#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,key,a[50];
    bool isDeleted = false;
    cout<<"Enter the size of array:: ";
    cin>>n;

    cout<<"Enter element of array\n";
    for (int i = 0; i < n; i++)
        cin>>a[i];  //enter elementt

    cout<<"\nEnter element to be delete :: ";
    cin>>key;  

    cout<<"\nBefore deletd array are:: ";
    for (int i = 0; i < n; i++)
        cout<<a[i]<<" ";  // print  elemnt before deleted
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            for (int j = i; j < n; j++)
            {// shift array element
                a[j]=a[j+1];
            }
            isDeleted =true;
            break;
        }
    }
    if (!isDeleted)
    {
        cout<<"Element is NOt found so cant deleted\n";
        exit(0);
    }
    cout<<"\nAfter deled array------\n";
    for (int i = 0; i < n-1; i++)
        cout<<a[i]<<" ";  // print  elemnt before deleted
    

    
    
    return 0;
}