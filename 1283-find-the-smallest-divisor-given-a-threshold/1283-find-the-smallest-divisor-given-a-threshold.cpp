class Solution {
public:
    bool check(vector<int>nums,int h,int mid){
        int op=0;
        for(int i=0;i<nums.size();i++){
            op+=ceil(double(nums[i])/mid);
        }
        if(op<=h){
            return true;
        }return false;
    }
    
    int smallestDivisor(vector<int>& nums, int threshold) {
        int s=1,e=1e6,ans=0;
        while(s<=e){
            int mid=(s+e)/2;
            if(check(nums,threshold,mid)){
                e=mid-1;
                ans=mid;
            }else{
                s=mid+1;
            }
        }return ans;
    }
};