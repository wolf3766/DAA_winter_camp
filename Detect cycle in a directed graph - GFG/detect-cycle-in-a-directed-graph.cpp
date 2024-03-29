//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int solve(vector<int>adj[],int src,vector<bool>&vis,vector<bool>&path){
        path[src]=true;
        vis[src]=true;
        
        for(auto i:adj[src]){
            if(!vis[i] && !path[i]){
                if(solve(adj,i,vis,path))return true;
            }else if(path[i]){
                return true;
            }
        }
        path[src]=false;
        return false;
    }
    
    bool isCyclic(int V,vector<int>adj[]) {
        vector<bool>vis(V,false),path(V,false);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(solve(adj,i,vis,path))return true;
            }    
        }return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends