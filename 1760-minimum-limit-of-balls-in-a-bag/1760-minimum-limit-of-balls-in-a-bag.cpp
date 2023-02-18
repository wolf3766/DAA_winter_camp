class Solution {
public:
    bool check(vector<int>&nums,int mid,int k){
        int op=0;
        for(int i=0;i<nums.size();i++){
              int x=nums[i]/mid;
            if(nums[i]%mid==0)x--;
            op+=x;
        }
        if(op<=k){
            return true;
        }
        return false;
    }
    
    int minimumSize(vector<int>& nums, int mx) {
        int s=1,e=1e9,ans=0;
        
        while(s<=e){
            int mid=(s+e)/2;
            if(check(nums,mid,mx)){
                ans=mid;
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return ans;
    }
};