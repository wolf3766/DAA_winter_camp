class Solution {
public:
    bool check(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')return true;
        return false;
    }
    
    vector<int> vowelStrings(vector<string>&words,vector<vector<int>>&q) {
        int n=words.size();
        vector<int>v(n+1,0),ans;
        
        for(int i=1;i<=n;i++){
            int s=words[i-1].size();
            if(check(words[i-1][0]) && check(words[i-1][s-1])){
                v[i]=v[i-1]+1;
            }
            if(v[i]==0){
                v[i]=v[i-1];
            }
        } 
        for(auto i:q){
            ans.push_back(v[i[1]+1]-v[i[0]]);
        }
        return ans;
    }
};