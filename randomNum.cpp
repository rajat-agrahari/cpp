#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    // ---To genrate random number
    srand(time(0)); // use to get random number on every time when program run
    for (int i = 0; i < 10; i++)
    {
        cout<<rand()%30<<" ";
    }
    /*
    v1 = rand() % 100;         // v1 in the range 0 to 99
    v2 = rand() % 100 + 1;     // v2 in the range 1 to 100
    v3 = rand() % 30 + 1985;   // v3 in the range 1985-2014
    */
    return 0;
}