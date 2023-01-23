class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>incoming(n+1),outgoing(n+1);
        for(auto i:trust){
            incoming[i[1]]++;
            outgoing[i[0]]++;
        }
        for(int i=1;i<=n;i++){
            if(incoming[i]==n-1 && outgoing[i]==0){
                return i;
            }
        }
        return -1;
    }
};