class Solution {
public:
    int countOdds(int low, int high) {
        int curr=high-low+1;
        if(curr&1){
            if(high&1 || low&1)return ((curr)/2)+1;
        }
        return curr/2;
    }
};