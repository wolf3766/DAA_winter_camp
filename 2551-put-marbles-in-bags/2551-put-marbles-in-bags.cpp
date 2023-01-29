class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        int n=weights.size();
        vector<int>temp;

        long long int MIN=weights[0]+weights[n-1],MAX=weights[0]+weights[n-1];
        for(int i=0;i<n-1;i++){
            temp.push_back(abs(weights[i+1]+weights[i]));
        }
        sort(temp.begin(),temp.end());
       int e=temp.size()-1;
        for(int i=0;i<k-1;i++){
            MIN+=temp[i];
            MAX+=temp[e-i];
        }
        // cout<<MAX<<" "<<MIN<<endl;
       return MAX-MIN;
    }
};