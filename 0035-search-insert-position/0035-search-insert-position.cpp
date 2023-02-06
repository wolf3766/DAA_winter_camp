class Solution {
public:
    int searchInsert(vector<int>& nums, int tar) {
            int s=0,e=nums.size()-1;
        if(nums[e]<tar)return e+1;
        while(s<e){
            int mid=(s+e)/2;
            if(nums[mid]<tar){
                s=mid+1;
            }else{
                e=mid;
            }
        }
        return e;
    }
};