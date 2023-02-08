class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size(),ans=0;
        int cur=0,curjump=0;
        for(int i=0;i<n-1;i++){
            curjump=max(curjump,i+nums[i]);
            
            if(i==cur){
                ans++;
                cur=curjump;
            }
        }
        return ans;
    }
};