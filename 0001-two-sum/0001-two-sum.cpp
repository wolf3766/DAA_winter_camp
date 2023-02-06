class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        vector<int>ans;
        
        for(int i=0;i<nums.size();i++){
            auto j=mp.find(target-nums[i]);
            if(j!=mp.end()){
                ans.push_back(i);
                ans.push_back(j->second);
                return ans;
            }
                mp[nums[i]]=i;
        }
        return ans;
    }
};