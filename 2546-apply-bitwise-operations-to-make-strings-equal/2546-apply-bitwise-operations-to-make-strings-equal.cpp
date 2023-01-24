class Solution {
public:
    bool makeStringsEqual(string s, string target) {
        int ones=0,onet=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1')ones++;
            if(target[i]=='1')onet++;
        } 
        if(ones>0 && onet>0 || ones==0 && onet==0)return true;
        return false;
    }
};