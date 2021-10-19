#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Binary
{
private:
    string s;

public:
    void read(void)
    {
        cout<<"Enter Binary number: ";
        cin>>s;
    }
    void check_bin(void)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if(s.at(i)!='0' && s.at(i)!='1')
            {
                cout<<"\nIncorrect Format";
                exit(0);
            }
        }
    }
    void ones_compl(void);
    void display(void);
};
void Binary ::ones_compl(void)
{
    check_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0')
            s.at(i)='1';
        else
            s.at(i)='0';
    }
}
void  Binary ::display(void)
{
    cout<<endl;
    cout<<s;
}

int main()
{
    Binary b;
    b.read();
    b.display();
    b.ones_compl();
    b.display();
    return 0;
}