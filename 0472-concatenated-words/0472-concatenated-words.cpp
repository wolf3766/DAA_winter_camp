class Solution {
public:
    vector<string>findAllConcatenatedWordsInADict(vector<string>&words) {
            unordered_set<string>store;
            vector<string>ans;
            for(auto i:words)store.insert(i);
            
        for(auto word:words){
            int n=word.size();
            vector<int>temp(n+1,0);
            temp[0]=1;
            for(int i=0;i<n;i++){
                if(temp[i]==0)continue;
                for(int j=i+1;j<=n;j++){
                    if(j-i<n && store.count(word.substr(i,j-i))){
                        temp[j]=1;
                    }
                }
                if(temp[n]){
                ans.push_back(word);
                    break;
                }
            }
        }
        return ans;
    }
};