#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, key, a[50], pos;
    // bool isDeleted = false;
    cout << "Enter the size of array:: ";
    cin >> n;

    cout << "Enter element of array\n";
    for (int i = 0; i < n; i++)
        cin >> a[i]; //enter elementt
    

    cout << "\nBefore inserted array are:: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " "; // print  elemnt before deleted

    cout<<"\n\nEnter position to insert number :: ";
    cin>>pos;
    if (pos > n)
    {
        cout << "\nThis is out of range.\n";
    }
    else
    {
        cout << "\nEnter element to be insert :: ";
        cin >> key;
        pos--;
        // traverse array loop in reverse order and size of array increase hence take n as last index
        for (int i = n; i >= pos; i--)
        {
            a[i + 1] = a[i]; // shift element forword
        }
        a[pos] = key;
        for (int i = 0; i < n + 1; i++)
        {
            cout << " " << a[i] << " ";
        }
    }

    return 0;
}