#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void permute(int index,vector<int> &nums,vector<vector<int>> &ans)
{
    if(index==nums.size()-1)
    {
        ans.push_back(nums);
        return;
    }
    for(int i=index;i<nums.size();i++)
    {
        swap(nums[index],nums[i]);
        permute(index+1,nums,ans);
        swap(nums[index],nums[i]);
    }
}

int main()
{
    vector<int> nums={1,2,3};
    vector<vector<int>> ans;
    
    permute(0,nums,ans);
    for(auto it:ans)
    {
        for(auto b:it)
        {
            cout<<b<<" ";
        }
        printf("\n");
    }
}