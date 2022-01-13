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

    // for(int i=0;i<nums.size(); i++){
    //     nums[i] = nums[i]*nums[i];
    // }
    // sort(nums.begin(), nums.end());

    int l = 0, r = nums.size() - 1;
    vector<int> result(nums.size());
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        if (abs(nums[r]) > abs(nums[l]))
        {
            // result[i] = nums[r] * nums[r];
            // r--;
            result[i] = nums[r] * nums[r--];
        }
        else
        {
            // result[i] = nums[l] * nums[l];
            // l++;
            result[i] = nums[l] * nums[l++];
        }
    }

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}