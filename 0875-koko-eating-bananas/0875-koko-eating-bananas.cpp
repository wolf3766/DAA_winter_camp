class Solution {
public:
    bool check(vector<int>piles,int h,int mid){
        long long int op=0;
        for(int i=0;i<piles.size();i++){
            op+=ceil(double(piles[i])/mid);
        }
        if(op<=h){
            return true;
        }
        return false;
    }
    
    int minEatingSpeed(vector<int>&piles,int h) {
        int s=1,e=1e9,ans=0;
        while(s<=e){
            int mid=(s+e)/2;
           if(check(piles,h,mid)){
               e=mid-1;
               ans=mid;
           }else{
               s=mid+1;
           }
        }
        return ans;
    }
};