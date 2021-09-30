#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a[5][5], b[5][5], above = 0, below = 0;
    cout << "Enter the size of first square Matrix(n x n):: ";
    cin >> n;
    cout << "Enter the matrix element :\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
            
    // Logic for transpose
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i > j)
                above += a[i][j];
            else if (i < j)
                below += a[i][j];

    cout << "\nSum of above element of digonal is :" << above;
    cout << "\nSum of below element of digonal is :" << below;
    return 0;
}