
vector<int> bfs(int n,vector<int>adj[])
{
 vector<int>vis(n+1,0);
 //vector<vector<int>>bfs;
 vector<int>bfs;
 queue<int>q;
 for(int i=1;i<=n;i++){
    if(vis[i]!=1){
        vis[i]=1;
        q.push(i);
    while(!q.empty())
    {
        int k=q.front();
        q.pop();
        bfs.push_back(k);
        for(auto x:k)
            {
            if(vis[x]!=1){
                vis[x]=1;
                q.push(x);
            }
          }
        }
      }
 }
 return bfs;
}
