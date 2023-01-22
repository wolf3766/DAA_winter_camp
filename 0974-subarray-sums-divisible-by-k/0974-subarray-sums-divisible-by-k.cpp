class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int cnt=0,sum=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            sum=(sum+nums[i]%k+k)%k;
            cnt+=mp[sum];
            mp[sum]++;
        }
        return cnt;
    }
};