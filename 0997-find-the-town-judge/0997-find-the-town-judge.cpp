class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<vector<int>>incoming(n+1),outgoing(n+1);
        for(auto i:trust){
            incoming[i[1]].push_back(i[0]);
            outgoing[i[0]].push_back(i[1]);
        }
        for(int i=1;i<=n;i++){
            if(incoming[i].size()==n-1 && outgoing[i].size()==0){
                return i;
            }
        }
        return -1;
    }
};