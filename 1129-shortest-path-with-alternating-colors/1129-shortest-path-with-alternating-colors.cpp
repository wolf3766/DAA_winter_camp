class Solution {
public:
    vector<int>shortestAlternatingPaths(int n,vector<vector<int>>&re,vector<vector<int>>&be){
        vector<vector<pair<int,int>>>adj(n);
    
        vector<int>ans(n,-1);
        
        for(auto i:re)adj[i[0]].push_back({i[1],0});
        for(auto i:be)adj[i[0]].push_back({i[1],1});
        queue<vector<int>>q;
        
        q.push(vector<int>{0,0,-1});
        
        while(!q.empty()){
            auto i=q.front();
            q.pop();
           ans[i[0]]= ans[i[0]]!=-1 ? ans[i[0]]:i[1];
            int node=i[0],step=i[1],col=i[2];
            
            for(auto &j:adj[i[0]]){
                if(j.second!=col && j.first!=-1){
                    q.push(vector<int>{j.first,step+1,j.second});
                    j.first=-1;
                }
            }
        }
        return ans;
    }
};