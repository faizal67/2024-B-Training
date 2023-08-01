#include<iostream>
#include<vector>
using namespace std;
void printf(int index,vector<int> &ds,int arr[],int n)
{
    if(index==n)
    {
        for(auto it:ds)
        {
            cout<<it<<" ";
        }
        if(ds.size()==0)
        {
            cout<<endl;
            return;
        }
        cout<<endl;
        return;
    }
    ds.push_back(arr[index]);
    printf(index+1,ds,arr,n);
    ds.pop_back();
    printf(index+1,ds,arr,n);

    
}
int main()
{

    int arr[]={3,1,2};
    int n=3;
    vector<int> ds;
    printf(0,ds,arr,n);

}

