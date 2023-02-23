class Solution {
public:
    int minOperations(int n) {
        vector<int>st;
        for(int i=0;i<=17;i++){
            st.push_back(pow(2,i));
            if(pow(2,i)==n)return 1;
        }
        int ans=0;
        while(1>0){
            ans++;
            auto it=lower_bound(st.begin(),st.end(),n);
            if(*it==n)break;
            n=min(n-*(it-1),*it-n);
            if(n<=0){
                break;
            }
        }return ans;
    }
};