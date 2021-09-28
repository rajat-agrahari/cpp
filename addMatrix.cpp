#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//input matrix 
void inputMatrix(int a[5][5],int n){
    cout<<"Enter the matrix element :\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
}
int main()
{
    int n, m, a[5][5], b[5][5], c[5][5];
    cout << "Enter the size of first square Matrix(n x n):: ";
    cin >> n;
    inputMatrix(a,n);
    cout << "Enter the size of second square Matrix(n x n):: ";
    cin >> m;
    if (n == m)
    {
       inputMatrix(b,n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                c[i][j]=a[i][j]+ b[i][j]; // Add matrix
            }
        }
        cout<<"After additon Matrix are::\n----------------------\n";
        // Print matrix
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<c[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    else
    {
        cout << "Invalid size of Matrix ! Can't Perform additon of matrix!";
        exit(0);
    }

    return 0;
}