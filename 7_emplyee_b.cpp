#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Employee
{
    int hours;
    int sal;

public:
    Employee() : hours(0), sal(0) {}
    Employee(int h, int s) : hours(h), sal(s) {}
    void addSal()
    {
        if (this->sal < 500)
            this->sal = this->sal + 10;
    }
    void addWork()
    {
        if (this->hours > 6)
            this->sal = this->sal + 5;
    }
    void getinfo(int h,int s)
    {
        this->hours=h;
        this->sal=s;
        addSal();
        addWork();
       display();
    }
    void display()
    {
        cout<<"Salary "<<sal<<" Hours "<<hours;
    }
};
int main()
{
    Employee e;
    e.getinfo(7,650);
     return 0;
}