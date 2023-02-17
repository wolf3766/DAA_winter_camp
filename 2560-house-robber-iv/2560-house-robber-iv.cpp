class Solution {
public:
    //binary search
    bool check(vector<int>&nums,int k,int mid){
            for(int i=0;i<nums.size();i++){
                if(nums[i]<=mid){
                    i++;
                    k--;
                }
            }
        if(k<=0)return true;
            return false;
    }
    
    
    int minCapability(vector<int>& nums, int k) {
            int l=0,h=1e9+1;
        while(l<h){
            int mid=(l+h)/2;
            if(check(nums,k,mid))h=mid;
            else l=mid+1;
        }
        return l;
    }
};