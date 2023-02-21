class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s=0,e=nums.size()-1;
        if(nums.size()==1)return nums[0];
        while(s<=e){
            int mid=(s+e)/2;
            if(mid<nums.size() && nums[mid]==nums[mid+1]){
                if(mid%2==0){
                    s=mid+1;
                }else{
                    e=mid-1;
                }
            }else if(mid>0 && nums[mid]==nums[mid-1]){
                if(mid%2!=0){
                    s=mid+1;
                }else{
                    e=mid-1;
                }
            }else{
                return nums[mid];
            }
            
        }return nums[s];
    }
};