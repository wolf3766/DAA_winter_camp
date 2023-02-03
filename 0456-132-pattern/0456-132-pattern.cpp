class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n=nums.size();
        vector<int>st(n);
        st[0]=nums[0];
        for(int i=1;i<n;i++)st[i]=min(st[i-1],nums[i-1]);
        
        for(int j=n-1,top=n;j>=0;j--){
            if(nums[j]<=st[j])continue;
            while(top<n && st[top]<=st[j])top++;
            if(top<n && nums[j]>st[top])return true;
            st[--top]=nums[j];
        }
        return false;
    }
};