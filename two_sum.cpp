#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("1input.txt", "r", stdin);
    freopen("1output.txt", "w", stdout);

    vector<int> nums;
    int size;
    cin>>size;
    for(int i=0; i<size; i++) {
        int ele;
        cin>>ele;
        nums.push_back(ele);
    }
    int target;
    cin>>target;
    vector<int> idx;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                idx.push_back(i);
                idx.push_back(j);
            }
        }
    }

    for(int i=0; i<idx.size(); i++) {
        cout<<idx[i]<<endl;
    }
    
}
