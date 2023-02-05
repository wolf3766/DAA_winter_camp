class Solution {
public:
    vector<int> findAnagrams(string s2, string s1) {
        vector<int>v1(26,0),v2(26,0);
        vector<int>ans;
        int cnt=0;
        
        if(s1.size()>s2.size())return ans;
        
        for(int i=0;i<s1.size();i++){
            v1[s1[i]-'a']++;
            v2[s2[i]-'a']++;
        }
        
        for(int i=0;i<26;i++){
            if(v1[i]==v2[i])cnt++;
        }
        if(cnt==26)ans.push_back(0);
        int i=0,j=s1.size(); 
        while(j<s2.size()){
            v2[s2[j]-'a']++;
            if(v2[s2[j]-'a']==v1[s2[j]-'a'])cnt++;
            else if(v2[s2[j]-'a']==v1[s2[j]-'a']+1)cnt--;
            v2[s2[i]-'a']--;
            
            if(v2[s2[i]-'a']==v1[s2[i]-'a'])cnt++;
            else if(v2[s2[i]-'a']==v1[s2[i]-'a']-1)cnt--;
            i++;j++;
            if(cnt==26)ans.push_back(i);
        }
        return ans;
    }
};