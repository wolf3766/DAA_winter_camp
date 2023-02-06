class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1)return strs[0];
        string ans="";
        for(int i=0;i<strs[0].size();i++){
            int cnt=0;
            for(int j=0;j<strs.size();j++){
                if(strs[j][i]==strs[0][i]){
                    cnt++;
                }else{
                    return ans;
                }
                if(cnt==strs.size()){
                    ans+=strs[0][i];
                }
            }
        }
        return ans;
    }
};