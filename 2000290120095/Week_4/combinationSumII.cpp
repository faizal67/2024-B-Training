#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void findCombination(int ind,vector<int> &arr,int target,vector<int> &ds,vector<vector<int>> &ans)
{
    if(target==0)
    {
        ans.push_back(ds);
        return;
    }
    for(int i=ind;i<arr.size();i++)
    {
        if(i>ind && arr[i]==arr[i-1])
        continue;
        if(arr[i]>target)
        break;
        ds.push_back(arr[i]);
        findCombination(i+1,arr,target-arr[i],ds,ans);
        ds.pop_back();
    }
}

int main()
{
    vector<int> arr={1,1,1,2,2};
    int target=4;
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    vector<int> ds;
    findCombination(0,arr,target,ds,ans);
    for(auto it:ans)
    {
        for(auto iterator:it)
        {
            cout<<iterator<<" ";
        }
        cout<<endl;
    }
}

