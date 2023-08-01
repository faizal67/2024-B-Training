#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<string>
using namespace std;

void solve(int i,int j,vector<vector<int>> &maze,int n,vector<string> &ans,string move,vector<vector<int>> &vis)
{
    if(i==n-1 && j==n-1)
    {
        ans.push_back(move);
    cout<<move;
    cout<<endl;
    }
    //Downward movement
    if(i+1<n && !vis[i+1][j] && maze[i+1][j]==1)
    {
        vis[i][j]=1;
        move+='D';
        solve(i+1,0,maze,n,ans,move,vis);
        vis[i][j]=0;
    }
    //left movement
    if(j-1>=0 && !vis[i][j-1] && maze[i][j-1]==1)
    {
        vis[i][j]=1;
        move+='L';
        solve(i,j-1,maze,n,ans,move,vis);
        vis[i][j]=0;
    }
    //right movement
    if(j+1<n && !vis[i][j+1] && maze[i][j+1]==1)
    {
        vis[i][j]=1;
        move+='R';
        solve(i,j+1,maze,n,ans,move,vis);
        vis[i][j]=0;
    }
    //upward movement
    if(i-1>=0 && !vis[i-1][j] && maze[i-1][j]==1)
    {
        vis[i][j]=1;
        move+='U';
        solve(i-1,j,maze,n,ans,move,vis);
        vis[i][j]=0;
    }
}

int main()
{
    int n=4;
    vector<vector<int>> maze={
        {1,0,0,0},
        {1,1,0,1},
        {1,1,0,0},
        {0,1,1,1}
    };
    vector<vector<int>> vis;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<n;j++)
        {
            vis[i][j]=1;
        }
    }
    vector<string> ans;
    string move="";
    solve(0,0,maze,n,ans,move,vis);
    for(auto it:ans)
    {
        
            cout<<it;
        cout<<endl;
    }
}