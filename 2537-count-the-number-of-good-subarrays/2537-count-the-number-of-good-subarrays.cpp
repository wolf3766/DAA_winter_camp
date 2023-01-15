class Solution {
public:
     long long countGood(vector<int>& A, int k) {
        long long res = 0;
         int i=0;
        unordered_map<int, int> mp;
        for (int j = 0; j < A.size(); ++j) {
            k -= mp[A[j]];
            mp[A[j]]++;
            while (k <= 0){
                --mp[A[i]];
                k +=mp[A[i]];
                i++;
            }
            res += i;
        }
        return res;
    }
};