class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int ans=0,cnt=0;
        unordered_map<int,int>mp;
        
        for(int i=0;i<fruits.size();i++){
            mp[fruits[i]]=i;
                cnt++;
            if(mp.size()>2){
                int k=INT_MAX;
                for(auto j:mp){
                    k=min(k,j.second);
                } 
                cnt=i-k;
                mp.erase(fruits[k]);
            } 
            ans=max(ans,cnt);
        }
        return ans;
    }
};