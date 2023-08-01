class Solution {
public:

    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size();
        int count = 0;
        bool reverse = false;
        map<int,int> adj;
        for(int i=n-1;i>=0;i--){
            if(reverse){
                for(int j=n-1;j>=0;j--)
                {
                    count++;
                    if(board[i][j]!=-1)
                    adj[count]=board[i][j];
                }
            }
            else{
                for(int j=0;j<n;j++)
                {
                    count++;
                    if(board[i][j]!=-1)
                    adj[count]=board[i][j];
                }
            }
            reverse = !reverse;
        }
        int moves = 0;
        queue<int> q;
        q.push(1);
        bool found = false;
        vector<int> vis(n*n+1,0);
        vis[1]=true;
        while(!q.empty() and !found){
            int sz = q.size();
            while(sz--){
                int node = q.front();
                q.pop();
                for(int die = 1;die<=6;die++){
                    if(node+die == n*n)
                     found= true;
                     //if we found ladder or snake
                    if(node+die <=n*n and adj[node+die] and !vis[adj[node+die]]){
                        vis[adj[node+die]]=true;
                        if(adj[node+die]==n*n)
                            found = true;
                        q.push(adj[node+die]);
                    }
                    else if(node+die <=n*n and !vis[node+die] and !adj[node+die]){
                        vis[node+die] = true;
                        q.push(node+die);
                    }

                }
            }
            moves++;
        }
        if(found)
        return moves;
        else 
        return -1;
    }
};