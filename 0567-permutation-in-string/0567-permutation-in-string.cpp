class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       if(s1.size()>s2.size())return false;
        vector<int>v1(26,0),v2(26,0);
        int cnt=0;
        for(int i=0;i<s1.size();i++){
            v1[s1[i]-'a']++;
            v2[s2[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(v1[i]==v2[i])cnt++;
        }
        int i=0,j=s1.size();
        while(j<s2.size()){
            if(cnt==26)return true;
            v2[s2[j]-'a']++;
            if(v2[s2[j]-'a']==v1[s2[j]-'a'])cnt++;
            else if(v2[s2[j]-'a']==v1[s2[j]-'a']+1)cnt--;
            v2[s2[i]-'a']--;
            
            if(v2[s2[i]-'a']==v1[s2[i]-'a'])cnt++;
            else if(v2[s2[i]-'a']==v1[s2[i]-'a']-1)cnt--;
            i++;
            j++;
        }
        return cnt==26;
    }
};