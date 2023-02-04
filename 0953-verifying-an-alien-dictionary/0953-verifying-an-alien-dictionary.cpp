class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int>mp;
        for(int i=0;i<order.size();i++){
            mp[order[i]]=i;
        }
        for(int i=1;i<words.size();i++){
            string st1=words[i-1],st2=words[i];
            int j=0;
            while(j<min(st1.size(),st2.size())){
                if(mp[st1[j]]>mp[st2[j]])return false;
                if(mp[st1[j]]<mp[st2[j]])break;
                j++;
            }
            if(j==min(st1.size(),st2.size()) && st1.size()>st2.size())return false;
        }
        return true;
    }
};