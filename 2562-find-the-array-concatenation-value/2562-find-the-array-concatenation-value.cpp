class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        long long ans=0;
        while(i<j){
            string s1=to_string(nums[i])+to_string(nums[j]);
            ans+=stoi(s1);
            i++;
            j--;
        }
        if(i==j){
            ans+=nums[i];
        }
        return ans;
    }
};