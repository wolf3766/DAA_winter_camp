class Solution {
public:
    bool solve(vector<int>nums,int m,int k,int mid){
        int op=0,temp=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mid){
                op=0;
            }else if(++op>=k){
                temp++;
                op=0;
            }
        }   if(temp>=m)return true;
        return false;
    }
    
    int minDays(vector<int>&bloomDay,int m,int k) {
        int s=1,e=1e9,ans=-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(solve(bloomDay,m,k,mid)){
                ans=mid;
                e=mid-1;
            }else{
                s=mid+1;
            }
        }return ans;
    }
};