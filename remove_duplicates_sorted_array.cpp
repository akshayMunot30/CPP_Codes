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

    int e = 0;
    for (int i = 1; i < size; i++)
    {
        if (nums[i] == nums[i - 1])
            e++;
        else
            nums[i - e] = nums[i];
    }

    cout<<size - e;
}