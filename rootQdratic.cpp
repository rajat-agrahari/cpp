#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    float a,b,c,x1,x2,Determinant,realP,imgP;
    cout<<"Enter the coefficient of a:: ";
    cin>>a;
    cout<<"\nEnter the coefficient of b:: ";
    cin>>b;
    cout<<"\nEnter the coefficient of c:: ";
    cin>>c;
    Determinant =(b*b - (4*a*c));
    if(Determinant >0){
        x1 = (-b + sqrt(Determinant))/(2*a);
        x2 = (-b - sqrt(Determinant))/(2*a);
        cout<<"\nRoots are Real and Different: Roots are:: "<<x1<<" "<<x2;
    }
    else if (Determinant == 0)
    {
        x1 = (-b + sqrt(Determinant))/(2*a);
        cout<<"\nRoots are Real and same: Roots are:: "<<x1;
    }
    else
    {
        cout<<"\nRoots are Complex and Different\n";
        imgP = -b/(2*a);
        realP = sqrt(Determinant)/(2*a);
        cout << "\nx1 = " << realP << "+" << imgP << "i" << endl;
        cout << "\nx2 = " << realP << "-" << imgP << "i" << endl;
    }
    
        
    return 0;
}