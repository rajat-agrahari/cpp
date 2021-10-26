#include <iostream>
using namespace std;

class Area
{
public:
     void print_area(int l, int b)
    {
        cout << l*b << endl;
    }

     void print_area(int s)
    {
        cout << s*s << endl;
    }
};

int main()
{
    Area s,r;
    s.print_area(7);
    r.print_area(7,8);
    return 0;
}         