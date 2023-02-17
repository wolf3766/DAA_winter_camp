class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>pq;
        long long int sum=0;
        for(auto i:gifts){
            pq.push(i);
            sum+=i;
        }
        while(k--){
            int tp=pq.top();
            pq.pop();
            pq.push(sqrt(tp));
            sum-=(tp-sqrt(tp));
        }
        
        return sum;
    }
};