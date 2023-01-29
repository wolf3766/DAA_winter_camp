class Solution {
public:
    int v[101]={0};
    int cnt=1;
    int distinctIntegers(int n) {
        v[n]=1;
        for(int i=2;i<n;i++){
            if(n%i==1 && v[i]==0){
               cnt++;
               distinctIntegers(i);
            }
        }return cnt;
    }
};