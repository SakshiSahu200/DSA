void dfsRec(int s, vector<int>&vis, vector<int>adj[], vector<int>&ans)
 {
        ans.push_back(s);
        vis[s]=1;
            for(auto x:k)
            {
                if(vis[x]==0){
                    dfsRec(x,vis, adj,ans);
                }
            }
 }
 public:
     vector<int>dfs(int v=n,vector<int>adj[]){
     vector<int>ans;
     vector<int>vis(n+1,0);
     for(int i=1;i<=n;i++)
     {

         if(!vis[i]){
            dfs(i,vis,adj,ans);
         }
     }
     return ans;
     }
