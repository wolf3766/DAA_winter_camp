//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  vector<int>drow={0,1,0,-1};
  vector<int>dcol={-1,0,1,0};
  
    void dfs(int r,int c,vector<vector<int>>&grid,vector<pair<int,int>>&v,int row0,int col0){
        grid[r][c]=0;
        v.push_back({r-row0,c-col0});
        for(int i=0;i<4;i++){
            int rn=drow[i]+r;
            int cn=dcol[i]+c;
            if(rn>=0 && rn<grid.size() && cn>=0 && cn<grid[0].size() && grid[rn][cn]==1){
                v.push_back({rn-row0,cn-col0});
                dfs(rn,cn,grid,v,row0,col0);
            }
        }
    }
  
    int countDistinctIslands(vector<vector<int>>& grid) {
        set<vector<pair<int,int>>>st;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]){
                vector<pair<int,int>>v;
                dfs(i,j,grid,v,i,j);
                st.insert(v);
                }
            }
        }return st.size();
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends