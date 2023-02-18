class Solution {
public:
    bool check(long long int h,long long int m){
        long long int apple=2*m*(m+1)*(2*m+1);
        if(apple>=h){
            return true;
        }return false;
    }
    
    long long minimumPerimeter(long long neededApples) {
        long long int s=1,e=1e5,ans=0;
        while(s<=e){
            long long int mid=(s+e)/2;
            if(check(neededApples,mid)){
                e=mid-1;
                ans=mid;
            }else{
                s=mid+1;
            }
        }return ans*8;
    }
};