class Solution {
public:
    int alternateDigitSum(int n) {
        int A1=0,A2=0;
        bool temp=true;
        while(n>0){
            if(temp){
                A1+=n%10;
            }else{
                A2+=n%10;
            }
            temp= !temp;
            n=n/10;
        }
        if(temp){
            return A2-A1;
        }
        return A1-A2;
    }
};