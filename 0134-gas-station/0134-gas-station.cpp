class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total=0;
        int curr=0,ind=0;
        for(int i=0;i<gas.size();i++){
            total+=gas[i]-cost[i];
            curr+=gas[i]-cost[i];
            if(curr<0){
                curr=0;
                ind=i+1;
            } 
        }
        if(total<0){ // if gas provided is less than cost required..
            return -1;
        }
        return ind; // returning index of the element
    }
};