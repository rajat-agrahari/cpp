#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
    int l, b;

public:
    Rectangle(int l, int b) : l(l), b(b) {}
    void area()
    {
        cout << "\nArea is : " << (l * b);
    }
    void perimeter()
    {
        cout << "\nPerimeter is : " << 2 * (l + b);
    }
};
class Square : public Rectangle
{
public:
    Square(int side) : Rectangle(side, side) {} // This is imp in inherit
};
int main()
{
    Rectangle r(4,6);
    Square s(6);
    r.area();
    s.area();
    r.perimeter();
    s.perimeter();
    return 0;
}