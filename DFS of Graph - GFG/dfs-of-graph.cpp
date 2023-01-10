//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int>ans;
    void solve(int sr,vector<int>adj[],vector<bool>&vis){
        ans.push_back(sr);
        vis[sr]=true;
      
        for(auto i:adj[sr]){
            if(!vis[i]){
                solve(i,adj,vis);
            }
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<bool>vis(V,false);
        solve(0,adj,vis);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends