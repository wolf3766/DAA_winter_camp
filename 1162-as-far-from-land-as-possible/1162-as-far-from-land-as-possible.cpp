class Solution {
public:
    const pair<int,int>dir[4]={{-1,0},{1,0},{0,-1},{0,1}};
    int maxDistance(vector<vector<int>>&grid) {
        int n=grid.size();
        vector<vector<int>>vis(n,vector<int>(n,0));
       
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    q.push({i,j});
                    vis[i][j]=1;
                }
            }
        } 
        int dis=-1;
        while(!q.empty()){
            int size=q.size();
            while(size--){
            auto front=q.front();
            q.pop();
            int r=front.first,c=front.second;
            for(auto i:dir){
                int x=r+i.first,y=c+i.second;
                if(x>=0 && y>=0 && x<n && y<n && grid[x][y]==0 && vis[x][y]==0){
                    q.push({x,y});
                    vis[x][y]=1;
                }
            }
          }
            dis++;
        }
        if(dis==0)return -1;
        return dis;
    }
};