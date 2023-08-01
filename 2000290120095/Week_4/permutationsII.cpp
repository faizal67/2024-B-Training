#include<iostream>
#include<vector>
using namespace std;

void permute(vector<int> &ds,vector<int> &nums,vector<vector<int>> &ans,int freq[])
{
    if(ds.size()==nums.size())
    {
        ans.push_back(ds);
        return;
    }
    for(int i=0;i<nums.size();i++)
    {
        if(!freq[i])
        {
            ds.push_back(nums[i]);
            freq[i]=1;
            permute(ds,nums,ans,freq);
            ds.pop_back();
            freq[i]=0;
        }
    }
}

int main()
{
    vector<int> nums={1,2,3};
    vector<vector<int>> ans;
    vector<int> ds;
    int freq[nums.size()]={0};
    permute(ds,nums,ans,freq);
    for(auto it:ans)
    {
        for(auto b:it)
        {
            cout<<b<<" ";
        }
        printf("\n");
    }
}