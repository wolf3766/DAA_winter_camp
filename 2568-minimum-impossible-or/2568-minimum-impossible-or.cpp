class Solution {
public:
    int minImpossibleOR(vector<int>& nums) {
        unordered_set<int>st;
        for(auto i:nums){
            st.insert(i);
        }
        int i=0;
        while(i>=0){
            if(st.find(pow(2,i))==st.end()){
                return pow(2,i);
            }i++;
        }
        return 0;
    }
};