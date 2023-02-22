class Solution {
public:
    bool check(vector<int>nums,int days,int cap){
            int op=1,sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>cap){
                op++;
                sum=nums[i];
            }
        }   
        if(op<=days){
            return true;
        }return false;
    }
    
    int shipWithinDays(vector<int>&weights,int days) {
        int s=-1,e=0,ans=0;
        for(int i=0;i<weights.size();i++){
            s=max(s,weights[i]);
            e+=weights[i];
        }
        while(s<=e){
            int mid=(s+e)/2;
            if(check(weights,days,mid)){
                e=mid-1;
                ans=mid;
            }else{
                s=mid+1;
            }
        }return ans;
    }
};