class Solution {
public:
    vector<vector<int>>ans;
    unordered_map<int,vector<int>>mp;
    
    void solve(string s){
        for(int i=0;i<s.size();i++){
              if(s[i]=='0'){
                  if(mp.find(0)==mp.end())mp[0]=vector<int>{i,i};
                 continue;
              }
           long long int num=0;
            for(int j=i;j<s.size() && j<i+32;j++){
                num*=2;
                num+=(s[j]-'0');
                if(mp.find(num)==mp.end())mp[num]=vector<int>{i,j};
            }
        }
    }
    
    vector<vector<int>>substringXorQueries(string s,vector<vector<int>>&q) {
         solve(s);   
        for(auto i:q){
                int num=i[1]^i[0];
                if(mp.find(num)!=mp.end()){
                      ans.push_back(mp[num]);
                }else{
                    ans.push_back(vector<int>{-1,-1});
                }
            }
        return ans;
    }
};