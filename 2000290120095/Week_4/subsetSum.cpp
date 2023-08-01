#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void findSum(int ind,vector<int> &arr,int sum,vector<int> &list)
{
    if(ind==arr.size())
    {
    list.push_back(sum);
    return;
    }

    findSum(ind+1,arr,sum+arr[ind],list);
    findSum(ind+1,arr,sum,list);
}

int main()
{
    vector<int> arr={3,1,2};
    vector<int> list;
    findSum(0,arr,0,list);
    for(auto it:list)
    {
            cout<<it<<" ";
    }
}