#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("1input.txt", "r", stdin);
    freopen("1output.txt", "w", stdout);

    int numRows;
    cin >> numRows;

    vector<vector<int>> pt;
    for (int i = 0; i < numRows; i++)
    {
        vector<int> row;
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
                row.push_back(1);
            else
                row.push_back(pt[i - 1][j - 1] + pt[i - 1][j]);
        }
        pt.push_back(row);
    }

    cout<<"[";
    for(int i=0; i<pt.size(); i++){
        cout<<"[ ";
        for(int j=0; j<=i; j++) {
            cout<<pt[i][j]<<" ";
        }
        cout<<"]";
    }
    cout<<"]";
}