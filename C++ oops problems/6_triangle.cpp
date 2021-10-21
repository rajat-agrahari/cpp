#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Triangle
{
private:
 int a,b,c;
public:
    Triangle(int a,int b,int c);
    ~Triangle();
    void perimeter(void);
};
void Triangle ::  perimeter(void)
{
    int peri = a+b+c;
    cout<<"\nPerimeter is "<<peri<<endl;
}
Triangle::Triangle(int a,int b,int c)
{
    this->a=a;
    this->b=b;
    this->c=c;
}
Triangle::~Triangle()
{
}

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    Triangle t1(x,y,z); // can be enter value by keyboard in constructor
    t1.perimeter();
    return 0;
}