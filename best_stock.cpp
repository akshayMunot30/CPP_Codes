#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("1input.txt", "r", stdin);
    freopen("1output.txt", "w", stdout);

    vector<int> prices;
    int size;
    cin>>size;
    for(int i=0; i<size; i++){
        int ele;
        cin>>ele;
        prices.push_back(ele);
    }
    int minprice = INT_MAX;
    int profit = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        minprice = min(minprice, prices[i]);
        profit = max(profit, (prices[i] - minprice));
    }

    cout<<profit;
}