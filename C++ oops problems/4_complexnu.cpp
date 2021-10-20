#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int real, img;

public:
    void setData(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    void display(void)
    {
        cout << "\n"
             << real << "+" << img << "i";
    }
    void setDatabySum(Complex a,Complex b);
};
void Complex :: setDatabySum(Complex a,Complex b)
    {
        this->real=a.real+b.real;
        this->img=a.img+b.img;
    }
int main()
{
    Complex c1, c2,c3;
    c1.setData(3, 6);
    c1.display();
    c2.setData(5, 9);
    c2.display();
    c3.setDatabySum(c1,c2);
    cout<<"\n--------";
    c3.display();
    return 0;
}