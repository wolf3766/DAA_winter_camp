class Solution {
public:
    vector<vector<int>>mergeArrays(vector<vector<int>>&nums1,vector<vector<int>>&nums2){
        map<int,int>mp;
        for(auto i:nums1){
            mp[i[0]]=i[1];
        }
        for(auto i:nums2){
            if(mp.find(i[0])!=mp.end()){
                mp[i[0]]+=i[1];
            }else{
                mp[i[0]]=i[1];
            }
        }
        vector<vector<int>>ans;
        for(auto i:mp){
            vector<int>temp{i.first,i.second};
            ans.push_back(temp);
        }
        return ans;
    }
};