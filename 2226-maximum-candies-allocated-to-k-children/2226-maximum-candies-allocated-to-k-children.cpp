class Solution {
public:
    bool check(vector<int>nums,long long k,int mid){
        long long int op=0;
        for(int i=0;i<nums.size();i++){
            op+=(nums[i]/mid);
        }  if(op>=k){
            return true;
        }
        return false;
    }
    
    int maximumCandies(vector<int>&candies,long long k) {
        int s=1,e=1e7,ans=0;
        while(s<=e){
            int mid=(s+e)/2;
            if(check(candies,k,mid)){
                s=mid+1;
                ans=mid;
            }else{
                e=mid-1;
            }
        }return ans;
    }
};