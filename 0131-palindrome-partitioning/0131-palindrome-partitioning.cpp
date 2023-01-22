class Solution {
public:
    vector<vector<string>>ans;
    
    bool check(string &s,int l,int h){
        while(l<h){
            if(s[l]!=s[h]){
                return false;
            }
            l++;
            h--;
        } return true;
    }
    
    void solve(int src,string s,vector<string>&temp){
            if(src>=s.size())ans.push_back(temp);
        for(int i=src;i<s.size();i++){
            if(check(s,src,i)){
                temp.push_back(s.substr(src,i-src+1));
                solve(i+1,s,temp);
                temp.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<string>temp;
        solve(0,s,temp);
        return ans;
    }
};