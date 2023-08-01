#include<iostream>
#include<vector>
using namespace std;

void findCombination(int index,int target,vector<int> &arr,vector<vector<int>> &ans,vector<int>&ds)
{
    if(index==arr.size()){
        if(target==0)
        {
        ans.push_back(ds);
        }
        return;
    }

    if(arr[index]<=target)
    {
        ds.push_back(arr[index]);
        findCombination(index,target-arr[index],arr,ans,ds);
        ds.pop_back();
    }
    findCombination(index+1,target,arr,ans,ds);
    
}

vector<vector<int>> driver(vector<int>& arr,int target)
{
    vector<vector<int>> ans;
    vector<int>ds;
    findCombination(0,target,arr,ans,ds);
    return ans;
}
int main()
{
    vector<int> arr={2,3,6,7};
    int target=7;
    vector<vector<int>> result=driver(arr,target);
    for(auto it:result)
    {
        for(auto iterator:it)
        {
            cout<<iterator<<" ";
        }
        cout<<endl;
    }
    cout<<"eop";
}