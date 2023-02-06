class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       int s=n-1;
       for(int i=2*n-1;i>=n;i--){
           nums[i]<<=10;
           nums[i]|=nums[s--];
       } 
        int i=0;
        for(int j=n;j<2*n;j++){
            int num1=nums[j]&1023;
            int num2=nums[j]>>10;
            nums[i+1]=num2;
            nums[i]=num1;
            i+=2;
        }
        return nums;
    }
};