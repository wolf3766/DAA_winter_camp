class Solution {
public:
    vector<vector<int>>ans;
    set<vector<int>>st;
    void solve(int src,vector<int>&nums,vector<int>&temp){
         if(temp.size()>=2)st.insert(temp); 
        if(src>=nums.size())return;    
          
        if(nums[src]>=temp[temp.size()-1]){
                temp.push_back(nums[src]);
                solve(src+1,nums,temp);
                temp.pop_back();
            }
            solve(src+1,nums,temp);
    }
    
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
             vector<int>temp;
            temp.push_back(nums[i]);
            solve(i+1,nums,temp);
        }
        for(auto i:st){
            ans.push_back(i);
        }
        return ans;
    }
};