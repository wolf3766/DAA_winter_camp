class Solution {
public:
    int searchInsert(vector<int>& nums, int tar) {
           for(int i=0;i<nums.size();i++){
               if(nums[i]>=tar)return i;
           }
        return nums.size();
    }
};