class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(auto i:nums){
            pq.push(i);
        }
        long long int ans=0;
        while(k--){
            int temp=pq.top();
            pq.pop();
            ans+=temp;
            pq.push(ceil(temp/3.0));
        }
        return ans;
    }
};