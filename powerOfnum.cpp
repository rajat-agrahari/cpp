#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int power(int num ,int x){
    int p=1;
    for(int i=0;i<x;i++)
    {
        p =p*num;
    }
    return p;
}

int main(){
    int num,x;
    cin>>num>>x;
    cout<<"\n"<<num<<" raised to power "<<x<<" is:"<<power(num,x); // custom logic apply for power
    cout<<"\n"<<pow(num,x); //use math.h header file or bits/stdc++.h file
    return 0;
}