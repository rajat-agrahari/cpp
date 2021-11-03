#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int distinct_Elm(int arr[],int n)
{
    int count=1,j;
    for (int i = 1; i < n; i++)
    {
        // comapre wih left of i element
      for ( j = 0; j < i; j++)
      {
        if(arr[i]==arr[j])
            break;
      }
    //   if not found eaual element incr. count
      if(i==j)
      {
        count++;
      }
    }
    
    return count;
}
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Element :\n";
    for (int i = 0; i < n; i++)
        cin>>arr[i];   
     cout<<"Distict Element are:  "<<distinct_Elm(arr,n); 
    return 0;
}