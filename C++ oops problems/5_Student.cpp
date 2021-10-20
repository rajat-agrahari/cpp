#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'. Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.
class Student
{
    string s;
    int rollno;

public:
void setData(int roll,string str)
{
    this->s=str;
    this->rollno=roll;
}
void show()
{
    cout<<"Roll no "<<rollno<<" Name "<<s;
}
};
int main()
{
    Student s1;
    s1.setData(2,"John");
    s1.show();
    return 0;
}