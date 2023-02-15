class Solution {
public:
    long long solve(vector<int>&nums,int val){
        long long cnt=0;
        int s=0,e=nums.size()-1;
        while(s<e){
            long long int sum=nums[s]+nums[e];
            if(sum<=val){
                cnt+=e-s;
                s++;
            }else{
                e--;
            }
        } 
        return cnt;
    }
    
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        
        return solve(nums,upper)-solve(nums,lower-1);
    }
};