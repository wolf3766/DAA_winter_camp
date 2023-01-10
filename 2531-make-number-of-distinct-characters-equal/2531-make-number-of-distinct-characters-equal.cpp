class Solution {
public:
    bool isItPossible(string word1, string word2) {
        unordered_map<char,int>mp1,mp2;
        for(auto i:word1)mp1[i]++;
        for(auto i:word2)mp2[i]++;
        
        for(int i=0;i<26;i++){
            for(int j=0;j<26;j++){
                char a=i+'a',b=j+'a';
                if(mp1.count(a) && mp2.count(b)){
                    if(--mp1[a]==0)mp1.erase(a);
                    if(--mp2[b]==0)mp2.erase(b);
                    mp1[b]++;
                    mp2[a]++;
                if(mp1.size()==mp2.size())return true;
                    
                    mp1[a]++;
                    mp2[b]++;
                    if(--mp1[b]==0)mp1.erase(b);
                    if(--mp2[a]==0)mp2.erase(a);
                }
            }
        }return false;
    }
};