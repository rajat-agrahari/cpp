#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1);
    void getData()
    {
        cout << a << " " << b << " " << c << " " << d << " " << e;
    }
}aman;
void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee rajat;
    rajat.setData(2,4,5);
    rajat.d=10;
    rajat.e=12;
    rajat.getData();
    aman.getData();     //0 value to all
    // cout<<rajat.d;  //throw error -- a is private
    return 0;
}