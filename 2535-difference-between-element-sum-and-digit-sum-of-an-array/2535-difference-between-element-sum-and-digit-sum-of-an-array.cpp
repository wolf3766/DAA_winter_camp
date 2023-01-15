class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0,dsum=0;
        for(auto i:nums){
            sum+=i;
            int temp=i;
            while(temp!=0){
                dsum+=temp%10;
                temp=temp/10;
            }
        }
        return abs(sum-dsum);
    }
};