class Solution {
public:
    int dfs(int sr,int p,vector<vector<int>>&adj,vector<bool>&hasApple){
            int child=0,total=0;   
        for(auto i:adj[sr]){
                if(i==p)continue;
               child=dfs(i,sr,adj,hasApple); 
                if(hasApple[i] || child){ 
                    total+=child+2; 
                }
            }   
        return total;
    }
    
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
            vector<vector<int>>adj(n);
        for(auto i:edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        return dfs(0,-1,adj,hasApple);
    }
};