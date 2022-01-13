#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int fib(int n, vector<int> &dp)
    {
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        // return fib(n - 1) + fib(n - 2);

        if(dp[n] != -1)
            return dp[n];
        return dp[n] = fib(n-1,dp) + fib(n-2,dp);
    }
};

int main()
{
    freopen("1input.txt", "r", stdin);
    freopen("1output.txt", "w", stdout);

    int n;
    cin >> n;
    vector<int> dp(100, -1);
    Solution s;
    cout<<s.fib(n,dp);
}