class Solution {
public:
    //count all the subarray part of larger array..
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>&q) {
            vector<vector<int>>ans(n,vector<int>(n+1,0));
            for(auto i:q){
               int r1=i[0],c1=i[1],r2=i[2],c2=i[3]+1;
                for(int x=r1;x<=r2;x++){
                    ans[x][c1]++;
                    ans[x][c2]--;
                }
            }
        for(int i=0;i<n;i++){
            int temp=0;
            for(int j=0;j<n;j++){
                temp+=ans[i][j];
                ans[i][j]=temp;
            }
        }
        for(auto &i:ans){
            i.pop_back();
        }     
        return ans;
    }
};