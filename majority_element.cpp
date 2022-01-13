#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("1input.txt", "r", stdin);
    freopen("1output.txt", "w", stdout);

    vector<int> nums;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int ele;
        cin >> ele;
        nums.push_back(ele);
    }

    int ns = nums.size();

    //approach 1 (using map)

    // unordered_map<int,int> m;
    // for(auto a: nums) {
    //     m[a]++;
    //     if(m[a]>ns/2)
    //         return a;
    // }
    // return -1;

    //approach 2 (majority element will always
    //be at center after sorting)

    // sort(nums.begin(), nums.end());
    // cout<<nums[ns/2];

    //approach 3 (using candidate&vote method)

    int c = 0, v = 0;
    for (auto a : nums)
    {
        if (v == 0)
            c = a;
        if (c == a)
            v++;
        else
            v--;
    }
    cout << c;
}